# Overview
This is the pump we used in BioTube for extruding alginate solution of high concentration (4%) and thus high viscocity. The noozle of the syringe can be directly vertically put into a Calcium solution bath without extra tubing connections.

![Main Image](./img/main.png)

# BOM
> ⚠️ **Note**: The syringe holde in our design is specified for 60mL Easy Glide syringe, and syringes from different brand or of different volumes might vary in size and thus doesn't fit into our design.

| Part ID | Name       | Number     |Specification| Purchase Link/3D Print Model File | Cost |
|---------|------------|------------|------------|------------|------------|
| A       | Aluminum Extrusion |5|400mm T Slot| [Amazon](https://www.amazon.com/dp/B08Y8N7FD1?ref=nb_sb_ss_w_as-reorder_k0_1_13&amp=&crid=3VBMHCCEM3T1E&sprefix=aluminum%2Bextr&th=1) |$4.75/pc|
| B       | Motor Holder |1|-| [STL model](./model/pump/motor_holder.stl) |-|
| C       | Stepper Motor |1|STEPPERONLINE Nema 17 Bipolar 1.5A 42Ncm 42x42x38mm 1.8deg| [Amazon](https://www.amazon.com/dp/B0B38GX54H?ref=nb_sb_ss_w_as-reorder_k6_1_10&amp=&crid=38ALOK9A3HVA2&sprefix=stepper%2Bmo&th=1) |$10/pc|
| D       | Shaft Coupler |1|5mm to 8mm| [Amazon](https://www.amazon.com/Zeberoxyz-Aluminium-Diameter20mm-Length25mm-Motor%EF%BC%886-35x8mm%EF%BC%89/dp/B08QVK3MWH/ref=sr_1_3?crid=3KA69M92NF2WA&dib=eyJ2IjoiMSJ9.G8P_Ai-VgIKyJdhHRLNPaFbWD6G-bg2DOH26e_dJ_AqZjmpm3Kfxe9YSS5Xe-C9LNhXHVXSkyMVGvJhy3w7LEzOaFjR0_xhorvwDRA0BQtQm_o5658zIPECaxB-ZqSg8cTDzOxQJmyprdWSFRnvjLCkQS1sFaRJWD6SSXs8aNToE-gX1_88rdvoSFGOqlOt1210Tec3Ieczaz3KT_ldxUSrQaFBJubXfvxQNzg0u4AYk5PVZCS47C-DpApR4D3O-lKW9g2xUJenxwATmf2JsD0dofLakgFuol9Dsr3QFC7A.zFeMgHKedo4BgMLGxM52Td_1PwYd4vTPVeZjAgLir9o&dib_tag=se&keywords=coupler+cnc&qid=1731899614&s=industrial&sprefix=couplercnc%2Cindustrial%2C129&sr=1-3) |$6/pc|
| E       | Lift Holder |2|-| [STL model](./model/pump/lift_holder.stl) |-|
| F       | Lead Screw with T8 Brass Nut |1 |350mm Tr8X8 (8mm Lead)| [Amazon](https://www.amazon.com/350mm-Tr8X8-Printer-Machine-Thread/dp/B0981YH6X7/ref=sr_1_2_pp?crid=NEQGLEHW82GC&dib=eyJ2IjoiMSJ9.XdtkPX4h1YB3gFMo_YePmreEhNOOEAi2CmLBdDgSsTHB-3wYwS8haRcTaf3a1oEjmV1tqwPEirnk-9F1l8cae6sbfjtPA_5U_kjapQrdl2EYU7h5B_AtmhosBm2scBV2K1ft3Di68isoY8s2LcPTmuMYr2f1YLnbBJgMRdwr5bdYJAMjmTowmCOx6ZxLaEAsJHr9HI6Qugzwpb1oaoI3Nq0UQ5RLxOVberFVHpM9UnA.io_qYugfcRh9ozo9h-KOLmMDV_9QlyutgJxBOFQhjaI&dib_tag=se&keywords=lead%2Bscrew&qid=1731309743&sprefix=lead%2Bsc%2Caps%2C202&sr=8-2&th=1) |$6.5/pc|
| G       | Linear Rail Guide |1|200mm MGN12H| [Amazon](https://www.amazon.com/ReliaBot-Linear-Carriage-Printer-Machine/dp/B07B4F2G48/ref=sr_1_4_pp?crid=3HSZ4GF0LXEF2&dib=eyJ2IjoiMSJ9.xv2mApy6OXeImp8zS-IY6t70tfCA4BcpTICYGr9J_tMtcL_7kACzuE-CrbZeUZvERJZC2Z9pb4-slgjQzCD1b9FKAKP6sbQCfrlgxB-V7TV8RjUyN2DV_Y4rUgEaULpjn2-HMRz2njCQ_zqqqx1MmIzFBtJzp1PTixS84pacS87l1szy-a8_WwY_WHtvnWcDmblIF_af1kneVuAi60JAlt2LCVxMGwlcdZMn1fLJB-Fg02CGcyWACvvMhueOOeiiVw9yHgw-puRPskDnv_H6uXJNlZameKzSuGZgbKYkeGo.Iz3TFtNkxApBWyeGzGlUHMSDNU7jYEYcUuqq0SmM628&dib_tag=se&keywords=linear%2Brail&qid=1731900294&s=industrial&sprefix=linear%2B%2Cindustrial%2C165&sr=1-4&th=1) |$18.59/pc|
| H       | Syringe Pusher |1|-| [STL model](./model/pump/syringe_pusher.stl) |-|
| I       | Syringe Holder |1|-| [STL model](./model/pump/syring_holder.stl) |-|
| J       | Syringe |1| Easy Glide 60mL| [Amazon](https://www.amazon.com/Global-Medical-Products-60cc-Syringes/dp/B07K1LR8NJ/ref=sr_1_3?crid=1YVAX7296ZPDI&dib=eyJ2IjoiMSJ9.sfwbnAiL-UMPtVgMlCeXilNhKokHq4WBHPKrefE8LbbkilqJLqJi-5AKSXLQeCXbu-kI5THbe7prRCoctJcOJ9-DCX-ehh51RlSZ1OutUZDy7vUJt-dTMZ6aoiYvSOxRfpAf92elrvULm3Qy-fMeMxpjHPBO5WJk0idDvyzXj0Pb6YnnG1KoWUMVN-8-aS1nKdCfEYkUIyZTzatJBi-OOxDxGrEoBUb29GUQJsJnzLafz0Bsb8g9hWv-jRiWaraHYRP6zdkkpFFN3HbS7DA_yWBcpNNyavusk0DvjQTpgoQ.uGhV05sAeG0f6NwzT-c5rWgmFhGA433Bso1aP3aBk9E&dib_tag=se&keywords=60+ml+syringe+easy+glide&qid=1731900449&s=industrial&sprefix=60+ml+syringe+easy+glid%2Cindustrial%2C134&sr=1-3) |$0.9/pc|
| K       | Base Fix |2|-| [STL model](./model/pump/base_fix.stl) |-|
| L       | Base Fix_2 |2|-| [STL model](./model/pump/base_fix_2.stl) |-|


- T-Nuts used: https://www.amazon.com/Hulless-Sliding-Fastener-Aluminum-Accessories/dp/B08NZMD2BJ

# Assembly
![assembly_1](./img/assembly_1.png)
![assembly_2](./img/assembly_2.png)
![assembly_3](./img/assembly_3.png)
![assembly_4](./img/assembly_4.png)
![assembly_5](./img/assembly_5.png)
![assembly_6](./img/assembly_6.png)

# Hardware
We used [Adafruit TB6612](https://www.adafruit.com/product/2448?gad_source=1&gclid=CjwKCAiA34S7BhAtEiwACZzv4feKOWty9u_dhpJHnMaGh85bf2fnYS228pUAWPnXRmB9vD5l0R1kcBoCeTUQAvD_BwE) as the stepper motor driver board and Arduino Uno as the micro-controller. Detailed assembly and wiring setup tutorials can be found [here](https://learn.adafruit.com/adafruit-tb6612-h-bridge-dc-stepper-motor-driver-breakout). 

# Spooling System
Using the syringe pump, we can further build a spooling system to wet-spin long fibers.
![spooler](./img/spooler.png)
| Part ID | Name  | Purchase Link/3D Print Model File | Notes |
|---------|-----------|------------|------------|
| A       | Transfer guide | [roller STL model](./model/spool/trans_roller.stl) and [stand STL model](./model/spool/trans_stand.stl)|two parts snap fit together, stand on the edge of the calcium bath.|
| B       | Spooler | [dish STL model](./model/spool/spool_dish.stl), [guide STL model](./model/spool/spool_guide.stl), and [roller STL model](./model/spool/spool_roller.stl)|spool guide snap fit to the dish, the roller friction fit to the stepper motor(STEPPERONLINE Nema 17 Bipolar), and the motor is fixed with M3 screws onto the base dish.|
| C       | Hardware | [stepper motor](https://www.amazon.com/dp/B0B38GX54H?ref=nb_sb_ss_w_as-reorder_k6_1_10&amp=&crid=38ALOK9A3HVA2&sprefix=stepper+mo&th=1), [Adafruit TB6612](https://www.adafruit.com/product/2448?gad_source=1&gclid=CjwKCAiA34S7BhAtEiwACZzv4feKOWty9u_dhpJHnMaGh85bf2fnYS228pUAWPnXRmB9vD5l0R1kcBoCeTUQAvD_BwE), and [Arduino Uno](https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/ref=sr_1_1_sspa?crid=3EVBEBEY5WUFD&dib=eyJ2IjoiMSJ9.MazmhFfn-DF8W5oyX_S-tDFAqLRDaMJSkroaZhdQMdgePys4UzrERZgaxu0RHrmwh6oVgxMiZ5PykFPY45Zvj87Nho46YM6UFmLyyZZjAn0L6t074YVOiWT-Q1EMX25k9gRe8ueEZ7A3kq8jP-jDkeuLtxGGCNdmPTliHHHvkVxqbvugIL-X0fECy0TzHxMwYFdukx7wd_svuEpTiAROAJ-aajf0YsN01CJUSs8xPC3EDYmW-gRf4Y5dC6FYkEryJn5V-s3US-daFTKSAhzqNwH3oRdLt56vptFPsIZFdq8.i5OoYhdnTQZC547sfhsutnHWYddfm_C7XG3OLTD-EuQ&dib_tag=se&keywords=arduino+uno&qid=1734476558&s=industrial&sprefix=arduino+uno%2Cindustrial%2C164&sr=1-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1)|Reference [tutorial](https://learn.adafruit.com/adafruit-tb6612-h-bridge-dc-stepper-motor-driver-breakout) for TB6612 wiring. We further used two potentiometers to tune the extrusion speed of the syringe pump and the spooling speed of the spooler on the fly so they can match.|

# Open Source
Our design is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0) https://creativecommons.org/licenses/by-nc-sa/4.0/.