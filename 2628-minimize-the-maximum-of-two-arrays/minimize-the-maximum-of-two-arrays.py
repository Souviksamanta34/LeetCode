import math

class Solution:
    def minimizeSet(self, divisor1: int, divisor2: int, uniqueCnt1: int, uniqueCnt2: int) -> int:
        lcm = math.lcm(divisor1, divisor2)
        return math.ceil(max(
            uniqueCnt1*divisor1/(divisor1-1),
            uniqueCnt2*divisor2/(divisor2-1),
            (uniqueCnt1+uniqueCnt2)*lcm/(lcm-1)
        ))-1