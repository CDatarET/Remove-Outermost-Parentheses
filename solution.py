class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        ret = []
        stk = 0
        for c in s:
            if c == '(':
                if stk != 0:
                    ret.append(c)
                
                stk += 1
            
            else:
                stk -= 1
                if stk != 0:
                    ret.append(c)
        
        return "".join(ret)
