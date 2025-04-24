class Solution(object):
    def myPow(self, x, n):
        if n == 0:
            return 1
        if n < 0:
            x = 1 / x
            n = -n
        return self._myPowRec(x, n)

    def _myPowRec(self, x, n):
        if n == 0:
            return 1
        half = self._myPowRec(x, n // 2)
        if n % 2 == 0:
            return half * half
        else:
            return half * half * x
