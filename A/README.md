# A - 기만자 특검해라
## 문제
기만자 백승우는 항상 자신이 코딩 초보라고 기만하고 다닌다.  
여러분은 승우의 기만 행위를 찾아 특검하고자 한다.

['solved.ac'](https://solved.ac)는 알고리즘 트레이닝 사이트 ['백준 온라인 저지'](https://www.acmicpc.net/)에 수록된 문제들의 난이도를 측정하는 서비스이다.  
[solved.ac](https://solved.ac) 기준 문제 난이도는 다음과 같다.  

**Ruby 1**  
**Ruby 2**  
**Ruby 3**  
**Ruby 4**  
**Ruby 5**  
**Diamond 1**  
**Diamond 2**  
**Diamond 3**  
**Diamond 4**  
**Diamond 5**  
**Platinum 1**  
**Platinum 2**  
**Platinum 3**  
**Platinum 4**  
**Platinum 5**  
**Gold 1**  
**Gold 2**  
**Gold 3**  
**Gold 4**  
**Gold 5**  
**Silver 1**  
**Silver 2**  
**Silver 3**  
**Silver 4**  
**Silver 5**  
**Bronze 1**  
**Bronze 2**  
**Bronze 3**  
**Bronze 4**  
**Bronze 5**

위로 갈수록 문제의 난이도가 높아지고, 아래로 갈수록 문제의 난이도는 쉬워진다.  
Ruby 1은 가장 어려운 문제이고, Bronze 5는 가장 쉬운 문제이다.  
Ruby, Diamond, Platinum, Gold, Silver, Bronze 순으로 난이도가 쉬워지며, 같은 난이도 내에서는 숫자가 작을수록 더 어려운 문제이다.

승우가 푼 문제의 난이도와 소프트웨어과 학생들이 푼 문제의 난이도가 각각 주어졌을 때 두 문제의 난이도를 비교하여 승우를 특검하자!

## 입력
첫 줄에 승우가 푼 문제의 난이도가 주어진다.  
두 번째 줄에 선린인터넷고등학교 소프트웨어과 학생들이 푼 문제들의 평균 난이도가 주어진다.

위에 있는 난이도가 아닌 다른 난이도가 주어지는 경우는 없다.

## 출력
만약 승우가 푼 문제가 더 어렵다면 "**gimanja teukgeomhaera**"를 출력하라.  
아니라면 "no"를 출력하라.

## 예시
### 입력 1
```
Ruby 1
Bronze 5
```
### 출력 1
```
gimanja teukgeomhaera
```

### 입력 2
```
Diamond 4
Diamond 3
```
### 출력 2
```
no
```

### 입력 3
```
Platinum 2
Gold 2
```
### 출력 3
```
gimanja teukgeomhaera
```

### 입력 4
```
Gold 5
Gold 5
```
### 출력 4
```
no
```

## 제한
시간 제한 : 1초

**문제를 만든 사람** : [eg_lee](https://solved.ac/profile/eg_lee)  
**문제를 검수한 사람** : [smoo3070](https://solved.ac/profile/smoo3070)  
**오타를 찾은 사람** : [nyaneo12](https://solved.ac/profile/nyaneo12)