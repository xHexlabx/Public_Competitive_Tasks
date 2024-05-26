# นักสู้ข้างถนน (Street Fighter)
<p>
แกงค์ "หม่าเมืองคอน" และ แกงค์ "หม่อนหาดใหญ่" เป็นแกงค์คู่อริกันมาเป็นระยะเวลานาน และต้องการตัดสินความเป็นใหญ่ในภาคใต้ วันหนึ่ง หม่า ผู้เป็นหัวหน้าแกงค์ "หม่าเมืองคอน" ได้ท้า หม่อน ผู้เป็นหัวหน้าแกงค์ "หม่อนหาดใหญ่" ให้มาต่อสู้ ตัดสินกันระหว่างสมาชิกตัว - ตัว แกงค์ใด ที่มีแต้มการชนะมากกว่า จะถือว่าเป็น <b>สุดยอดแกงค์แห่งภาคใต้</b> เพื่อจัดการแข่งขันในครั้งนี้ เจแปน สิงห์คำรน อดีตนักมวยเก่าในสนามใต้ดิน จึงได้มาเป็นกรรมการและเป็นผู้ห้ามปรามการต่อสู้ที่เกินเลย โดยเจแปนนั้น ได้สร้างกฎกติกาการแข่งขันขึ้นมาดังนี้ 
	<ul>
		<li><b>กฎข้อแรก</b> ให้แต่ละแกงค์เลือกนักสู้มาเป็นจำนวน $N$ คน โดยแต่ละคนจะได้เข้าต่อสู้ตามลำดับ</li>
		<li><b>กฎข้อสอง</b> ให้นักสู้ของแต่ละฝ่าย ต่อสู้กันแบบตัวต่อตัว โดยจะตัดสินการต่อสู้กันด้วยพลังต่อสู้โดยนักสู้จากแกงค์หม่าเมืองคอนจะมีพลัง $X_i$  และ นักสู้จากแกงค์ หม่อนหาดใหญ่ มีพลังต่อสู้ $Y_i $ หน่วย โดยผู้ชนะจะวัดจากผู้ที่มีพลังมากกว่าในขณะนั้น  และแกงค์ที่ชนะจะได้แต้มไป ผู้ที่ชนะการต่อสู้จะถูกลดพลังไปตามคู่ต่อสู้ที่ชนะไป (หากทั้งสองฝ่ายมีพลังเท่ากัน ให้ทั้งคู่หมดสภาพทั้งคู่ และ ให้แกงค์ทั้งสองได้คะแนนไป) </li>
		<li><b>กฏข้อที่สาม</b> ผู้ที่แพ้การต่อสู้จะให้ไปพักฟื้นจนพลังกลับมาเท่าเดิม(พลังเริ่มต้น) แล้วมาต่อคิวต่อสู้ใหม่ที่ตำแหน่งหลังสุด เพื่อรอการต่อสู้ครั้งต่อไป</li>
		
</ul>

โดยจะมีเหตุการณ์เกิดขึ้นทั้งหมด $T$ ครั้ง แบ่งเป็นเหตุการณ์ "A" คือให้นักสู้ทั้งสองที่อยู่แถวหน้าสุดต่อสู้กัน และ เหตุการณ์ "B" คือถามว่านักสู้ที่อยู่แถวหน้าสุด <b>3 คน</b> ของแต่ละแกงค์ในขณะนี้มีพลังต่อสู้เท่าใด โดยแสดงพลังของแกงค์ หม่าเมืองคอน เว้นบรรทัดแล้วจึงแสดงพลังของ แกงค์ หม่อนหาดใหญ่ เมื่อสิ้นสุดการต่อสู้ ให้แสดงคะแนนของแกงค์หม่าเมืองคอน และแกงค์หม่อนหาดใหญ่ ตามลำดับ
</p>


## Input

บรรทัดแรก : รับจำนวนเต็ม $N$ , $T$ แทนจำนวนนักสู้ทั้งหมด และ จำนวนเหตุการณ์ทั้งหมด

บรรทัดถัดมา : รับจำนวนเต็ม $X_i$ แทนพลังต่อสู้แต่ละคนของแกงค์ หม่าเมืองคอน

บรรทัดถัดมา : รับจำนวนเต็ม $Y_i$ แทนพลังต่อสู้แต่ละคนของแกงค์ หม่อนหาดใหญ่

$T$  บรรทัดถัดมา : รับอักขระ "A" แทนเกิดเหตุการณ์ให้นักสู้ต่อสู้กัน หรือ อักขระ "B" แทนเหตุการณ์ให้แสดงค่าพลัง 3 คนแรก ของแต่ละแกงค์ในขณะนั้น
 


## Output

จำนวนเต็มที่แสดงค่าพลังของนักสู้แต่ละคน (ถ้ามี) และผลสรุปคะแนนการต่อสู้จากเหตุการณ์ทั้งหมดที่เกิดขึ้น
<div style="page-break-after: always;"></div>

## Examples

### ตัวอย่างที่ 1

<table width=100%><tr align="center"><th>ข้อมูลนำเข้า</th><th>ข้อมูลส่งออก</th></tr>
<tr><td width=50% style="vertical-align:top"><pre style="background-color: transparent; border:0;">
5 5
10 20 30 40 50
20 30 10 40 50
A
A
A
B
A
</pre></td><td style="vertical-align:top"><pre style="background-color: transparent; border:0;">
30 40 50
20 10 40
2 2
</pre></td></tr>
	
</table>

คำอธิบาย : 

รับคำสั่ง A นักสู้ทั้งสองฝั่งต่อสู้กัน นักสู้ฝั่งหม่อนหาดใหญ่เป็นฝ่ายชนะ เหลือพลังต่อสู้ (20 - 10) = 10 หน่วย ได้คะแนนให้ฝั่งหาดใหญ่ 1 คะแนน และ นักสู้ของทางหม่าเมืองคอน ต้องกลับไปต่อหลังสุด (ด้วยพลัง 10 หน่วย)

ต่อมา รับคำสั่ง A นักสู้ทั้งสองฝั่งต่อสู้กัน นักสู้ฝั่งหม่าเมืองคอนเป็นฝ่ายชนะ เหลือพลังต่อสู้ (20 - 10) = 10 หน่วย ได้คะแนนให้ฝั่งเมืองคอน 1 คะแนน และ นักสู้ของทางหม่อนหาดใหญ่ ต้องกลับไปต่อหลังสุด (ด้วยพลัง 20 หน่วย)

ต่อมา รับคำสั่ง A นักสู้ทั้งสองฝั่งต่อสู้กัน นักสู้ฝั่งหม่อนหาดใหญ่เป็นฝ่ายชนะ เหลือพลังต่อสู้ (30 - 10) = 20 หน่วย ได้คะแนนให้ฝั่งหาดใหญ่ 1 คะแนน และ นักสู้ของทางหม่าเมืองคอน ต้องกลับไปต่อหลังสุด (ด้วยพลัง 20 หน่วย)

ต่อมา รับคำสั่ง B แสดงพลังต่อสู้ที่มีอยู่ 3 คนแรก ของฝั่งหม่าเมืองคอน เว้นบรรทัด และ 3 คนแรกของฝั่ง หม่อนหาดใหญ่ ตามลำดับ

ต่อมา รับคำสั่ง A นักสู้ทั้งสองฝั่งต่อสู้กัน นักสู้ฝั่งหม่าเมืองคอนเป็นฝ่ายชนะ เหลือพลังต่อสู้ (30 - 20) = 10 หน่วย ได้คะแนนให้ฝั่งเมืองคอน 1 คะแนน และ นักสู้ของทางหม่อนหาดใหญ่ ต้องกลับไปต่อหลังสุด (ด้วยพลัง 30 หน่วย)

จบการต่อสู้ นักสู้ทั้งสองฝั่งได้คะแนนไปฝ่ายละ  2 คะแนน (แสดงแต้มของฝั่งหม่าเมืองคอน และ หม่อนหาดใหญ่ตามลำดับ)
<div style="page-break-after: always;"></div>

### ตัวอย่างที่ 2

<table width=100%><tr align="center"><th>ข้อมูลนำเข้า</th><th>ข้อมูลส่งออก</th></tr>
<tr><td width=50% style="vertical-align:top"><pre style="background-color: transparent; border:0;">
5 5
10 20 30 40 50
10 20 30 40 50
A
B
A
B
A
</pre></td><td style="vertical-align:top"><pre style="background-color: transparent; border:0;">
20 30 40
20 30 40
30 40 50
30 40 50
3 3
</pre></td></tr>
</table>

## Constraints
* $1\leq N \leq 10$<sup>$6$</sup> 
* $1 \leq T\leq 10^6$ 
* $1 \leq X_i , Y_i \leq 10^6$ 


<div style="page-break-after: always;"></div>

## Subtasks
1. (10 points)  $1\leq T ,N  \leq 10^3$ 
2. (10 points)  $1\leq T ,N  \leq 10^4 $  และเกิดเหตุการณ์เฉพาะเหตุการณ์ A เท่านั้น
3. (20 points) $1\leq T ,N  \leq 10^4$ 
4. (20 points) $1\leq T ,N  \leq 10^5$ และเกิดเหตุการณ์เฉพาะเหตุการณ์ A เท่านั้น
5. (40 points) $1\leq T ,N  \leq 10^6$ 

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