# Top-K-Frequent-Elements

给定一个数组，找出其出现频率最高的K个数，vector返回。

思路：初看以为是道常规题目，用map记录出现次数即可，但无法根据value排序，继而无法取得key，且有出现频率相同的数值。
     discuss中解法：使用二维数组，出现次数为vec[0],而出现该次数的数值为vec[0][0]
     对vec从尾至头遍历即可，取vec[n][n]中的数值。
