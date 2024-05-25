# เกมทายตัวเลข (Guess)

<p>
เจแปนษฎา เป็นอาจารย์คณิตศาสตร์ที่เขียนโปรแกรมได้นิดหน่อย เจแปนเป็นคนชอบเล่นเกมและชอบเล่นเกมเกี่ยวกับตัวเลขเป็นอย่างมาก วันหนึ่งเจแปนได้ลองเล่นเกมทายตัวเลขที่เห็นจากแอพลิเคชั่น "Armbook" และรู้สึกสนุกขึ้นมา จึงอยากให้คุณผู้ซึ่งกำลังอ่านโจทย์ข้อนี้ได้เล่นด้วย โดยเกม เกมนี้ต้องการให้คุณทายชุดตัวเลขโดด 1-9 ที่ไม่ซ้ำกันในแต่ละหลัก โดยคุณต้องทายชุดตัวเลขที่มีความยาว $N$ ทั้งหมดที่เป็นไปได้ที่สอดคล้องกับข้อมูลที่ให้จำนวน $M$ ชุด ดังตัวอย่างต่อไปนี้ (ตอบกรณีทั้งหมดที่เป็นไปได้โดยให้เรียงลำดับจากตัวเลขน้อยไปมาก)
</p>

<table width=100%>
	<tr align="center"><th>ชุดตัวเลข $(N = 5 , M = 4)$</th><th>จำนวนตัวเลขที่ตำแหน่งถูกต้อง</th><th>จำนวนตัวเลขที่มีแต่ตำแหน่งไม่ถูกต้อง</th></tr>
	
<tr><td width=40% style="vertical-align:top"><pre style="background-color: transparent; border:0;">
1 3 4 5 7
8 9 1 3 6
2 3 5 7 8
9 3 8 5 6
</pre></td>
<td style="vertical-align:top"><pre style="background-color: transparent; border:0;">
2
1
1
3
</pre></td>
		<td style="vertical-align:top"><pre style="background-color: transparent; border:0;">
2
2
1
0
</pre></td></tr>
	</tr>
	
</table>

จากเงื่อนไขข้างต้น มีกรณีเดียวที่จะสามารถสร้างชุดจำนวนได้คือ 9 3 1 5 4 


<table width=100%>
	<tr align="center"><th>ชุดตัวเลข $(N = 3 , M = 2)$</th><th>จำนวนตัวเลขที่ตำแหน่งถูกต้อง</th><th>จำนวนตัวเลขที่มีแต่ตำแหน่งไม่ถูกต้อง</th></tr>
	
<tr><td width=40% style="vertical-align:top"><pre style="background-color: transparent; border:0;">
8 3 9
1 2 7
</pre></td>
<td style="vertical-align:top"><pre style="background-color: transparent; border:0;">
1
1

</pre></td>
		<td style="vertical-align:top"><pre style="background-color: transparent; border:0;">
0
1


</pre></td></tr>
	</tr>
	
</table>

จากเงื่อนไขข้างต้น มีกรณีที่จะสามารถสร้างชุดจำนวนได้คือ

1 3 2 ,
1 7 9 ,
2 3 7 ,
7 2 9 ,
8 1 7 ,
8 2 1 ทั้งหมด 6 กรณี

<div style="page-break-after: always;"></div>

## Input

บรรทัดแรก : รับจำนวนเต็ม $N$ , $M$ แทนจำนวนหลักของตัวเลขทั้งหมดที่ต้องการทาย และจำนวนเงื่อนไขของชุดตัวเลข

$M$ บรรทัดถัดมา : รับจำนวนเต็ม $n_1 - n_N$ แทนชุดตัวเลขที่ทำการทายมาก่อน และ $a , b$ แทนจำนวนตัวเลขที่ถูกต้องและอยู่ถูกตำแหน่งแล้ว และ จำนวนที่มีอยู่ในชุดตัวเลขจริง แต่อยู่ผิดตำแหน่ง ตามลำดับ


## Output

ชุดจำนวนเต็ม แทนชุดจำนวนที่สามารถสร้างได้จากเงื่อนไขข้างต้น โดยเรียงลำดับจากน้อยไปมาก และ จำนวนของชุดจำนวนทั้งหมดที่สามารถสร้างได้ตามเงื่อนไข
<div style="page-break-after: always;"></div>

## Examples

### ตัวอย่างที่ 1

<table width=100%><tr align="center"><th>ข้อมูลนำเข้า</th><th>ข้อมูลส่งออก</th></tr>
<tr><td width=50% style="vertical-align:top"><pre style="background-color: transparent; border:0;">
5 4
1 3 4 5 7 2 2
8 9 1 3 6 1 2
2 3 5 7 8 1 1
9 3 8 5 6 3 0
</pre></td><td style="vertical-align:top"><pre style="background-color: transparent; border:0;">
9 3 1 5 4
1
</pre></td></tr>
	
</table>

### ตัวอย่างที่ 2

<table width=100%><tr align="center"><th>ข้อมูลนำเข้า</th><th>ข้อมูลส่งออก</th></tr>
<tr><td width=50% style="vertical-align:top"><pre style="background-color: transparent; border:0;">
3 2
8 3 9 1 0
1 2 7 1 1
</pre></td><td style="vertical-align:top"><pre style="background-color: transparent; border:0;">
1 3 2
1 7 9
2 3 7
7 2 9
8 1 7
8 2 1
6
</pre></td></tr>
</table>

## Constraints
* $1\leq N , M  \leq 10$
* $1 \leq n_i\leq 9$ 
* $1 \leq a + b \leq N$ 


<div style="page-break-after: always;"></div>

## Subtasks
1. (100 points) ไม่มีเงื่อนไขเพิ่มเติม

## Limits
* Time limit: 1.0 seconds
* Memory limit: 32 MB

## Author
* ผู้ออกโจทย์ : ธีร์ เหมจินดา ( HexTex ) 
* *** โจทย์เหล่านี้ออกมีจุดประสงค์ในการพัฒนาผู้มีความสนใจด้าน Competitive Programming อนุญาตให้นำไปใช้ในด้านการศึกษาได้ หากมีข้อผิดพลาดหรือข้อสอบถาม สามารถติดต่อสอบถามผู้ออกโจทย์ได้ เพื่อจะได้นำโจทย์ไปแก้ไขต่อไป ***

## Contacts
* Github : xHexlabx 
* Facebook : ธีร์ เหมจินดา
* Instagram : hextex.ipynb