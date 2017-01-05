package ast;

import type.Type;

public class DereferenceNode extends LHSNode{
    private ExprNode expr;

    public DereferenceNode(ExprNode expr){
        this.expr = expr;
    }

    protected Type origType(){
        return expr.type().baseType();
    }

    public ExprNode expr(){
        return expr;
    }

    public void setExpr(ExprNode expr){
        this.expr = expr;
    }

}
