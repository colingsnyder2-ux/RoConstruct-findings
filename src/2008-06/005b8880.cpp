// roc 2008-06 005b8880  unit: VStockSound::?$FactoryProduct  size: 3880 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b8880
//
// 005b8880  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 005b8886  33d2                 xor edx, edx
// 005b8888  83ec7c               sub esp, 0x7c
// 005b888b  3bc2                 cmp eax, edx
// 005b888d  0f84b00e0000         je 0x5b9743
// 005b8893  8b8970010000         mov ecx, dword ptr [ecx + 0x170]
// 005b8899  83f917               cmp ecx, 0x17
// 005b889c  0f87a10e0000         ja 0x5b9743
// 005b88a2  ff248d48975b00       jmp dword ptr [ecx*4 + 0x5b9748]
// 005b88a9  d90550798300         fld dword ptr [0x837950]
// 005b88af  b9f0d8ffff           mov ecx, 0xffffd8f0
// 005b88b4  d95c2408             fstp dword ptr [esp + 8]
// 005b88b8  894c2410             mov dword ptr [esp + 0x10], ecx
// 005b88bc  d9e8                 fld1 
// 005b88be  894c2414             mov dword ptr [esp + 0x14], ecx
// 005b88c2  d954240c             fst dword ptr [esp + 0xc]
// 005b88c6  8d0c24               lea ecx, [esp]
// 005b88c9  d954241c             fst dword ptr [esp + 0x1c]
// 005b88cd  891424               mov dword ptr [esp], edx
// 005b88d0  d9542420             fst dword ptr [esp + 0x20]
// 005b88d4  c7442404ffffffff     mov dword ptr [esp + 4], 0xffffffff
// 005b88dc  d95c2424             fstp dword ptr [esp + 0x24]
// 005b88e0  89542418             mov dword ptr [esp + 0x18], edx
// 005b88e4  d9054c798300         fld dword ptr [0x83794c]
// 005b88ea  c7442428d6f5ffff     mov dword ptr [esp + 0x28], 0xfffff5d6
// 005b88f2  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b88f6  c744243cc8000000     mov dword ptr [esp + 0x3c], 0xc8
// 005b88fe  d9ee                 fldz 
// 005b8900  c74424783f030000     mov dword ptr [esp + 0x78], 0x33f
// 005b8908  d9542430             fst dword ptr [esp + 0x30]
// 005b890c  51                   push ecx
// 005b890d  d9542438             fst dword ptr [esp + 0x38]
// 005b8911  d954243c             fst dword ptr [esp + 0x3c]
// 005b8915  d90548798300         fld dword ptr [0x837948]
// 005b891b  d95c2444             fstp dword ptr [esp + 0x44]
// 005b891f  d9542448             fst dword ptr [esp + 0x48]
// 005b8923  d954244c             fst dword ptr [esp + 0x4c]
// 005b8927  d9542450             fst dword ptr [esp + 0x50]
// 005b892b  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b8931  d9542454             fst dword ptr [esp + 0x54]
// 005b8935  d95c245c             fstp dword ptr [esp + 0x5c]
// 005b8939  d9542458             fst dword ptr [esp + 0x58]
// 005b893d  d9542460             fst dword ptr [esp + 0x60]
// 005b8941  d90544798300         fld dword ptr [0x837944]
// 005b8947  d95c2464             fstp dword ptr [esp + 0x64]
// 005b894b  d905e06d8200         fld dword ptr [0x826de0]
// 005b8951  d95c2468             fstp dword ptr [esp + 0x68]
// 005b8955  d90540798300         fld dword ptr [0x837940]
// 005b895b  d95c246c             fstp dword ptr [esp + 0x6c]
// 005b895f  d9542470             fst dword ptr [esp + 0x70]
// 005b8963  e9c40d0000           jmp 0x5b972c
// 005b8968  d90550798300         fld dword ptr [0x837950]
// 005b896e  89542404             mov dword ptr [esp + 4], edx
// 005b8972  d95c2408             fstp dword ptr [esp + 8]
// 005b8976  c74424149cffffff     mov dword ptr [esp + 0x14], 0xffffff9c
// 005b897e  d9e8                 fld1 
// 005b8980  c7442428d6f5ffff     mov dword ptr [esp + 0x28], 0xfffff5d6
// 005b8988  d954240c             fst dword ptr [esp + 0xc]
// 005b898c  c744243cc8000000     mov dword ptr [esp + 0x3c], 0xc8
// 005b8994  d9053c798300         fld dword ptr [0x83793c]
// 005b899a  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b899e  d90538798300         fld dword ptr [0x837938]
// 005b89a4  d95c2420             fstp dword ptr [esp + 0x20]
// 005b89a8  d95c2424             fstp dword ptr [esp + 0x24]
// 005b89ac  d9054c798300         fld dword ptr [0x83794c]
// 005b89b2  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b89b6  d9ee                 fldz 
// 005b89b8  d9542430             fst dword ptr [esp + 0x30]
// 005b89bc  d9542434             fst dword ptr [esp + 0x34]
// 005b89c0  d9542438             fst dword ptr [esp + 0x38]
// 005b89c4  d90548798300         fld dword ptr [0x837948]
// 005b89ca  d95c2440             fstp dword ptr [esp + 0x40]
// 005b89ce  891424               mov dword ptr [esp], edx
// 005b89d1  d9542444             fst dword ptr [esp + 0x44]
// 005b89d5  d9542448             fst dword ptr [esp + 0x48]
// 005b89d9  d954244c             fst dword ptr [esp + 0x4c]
// 005b89dd  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b89e3  d9542450             fst dword ptr [esp + 0x50]
// 005b89e7  d95c2458             fstp dword ptr [esp + 0x58]
// 005b89eb  d9542454             fst dword ptr [esp + 0x54]
// 005b89ef  d954245c             fst dword ptr [esp + 0x5c]
// 005b89f3  e9f40c0000           jmp 0x5b96ec
// 005b89f8  d90598728200         fld dword ptr [0x827298]
// 005b89fe  c744240401000000     mov dword ptr [esp + 4], 1
// 005b8a06  d95c2408             fstp dword ptr [esp + 8]
// 005b8a0a  c744241490e8ffff     mov dword ptr [esp + 0x14], 0xffffe890
// 005b8a12  d9e8                 fld1 
// 005b8a14  c74424284cfbffff     mov dword ptr [esp + 0x28], 0xfffffb4c
// 005b8a1c  d954240c             fst dword ptr [esp + 0xc]
// 005b8a20  c744243ccf000000     mov dword ptr [esp + 0x3c], 0xcf
// 005b8a28  d90534798300         fld dword ptr [0x837934]
// 005b8a2e  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b8a32  d90504e78100         fld dword ptr [0x81e704]
// 005b8a38  d95c2420             fstp dword ptr [esp + 0x20]
// 005b8a3c  d95c2424             fstp dword ptr [esp + 0x24]
// 005b8a40  d9059c838100         fld dword ptr [0x81839c]
// 005b8a46  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b8a4a  d9ee                 fldz 
// 005b8a4c  d9542430             fst dword ptr [esp + 0x30]
// 005b8a50  d9542434             fst dword ptr [esp + 0x34]
// 005b8a54  d9542438             fst dword ptr [esp + 0x38]
// 005b8a58  d905c46f8200         fld dword ptr [0x826fc4]
// 005b8a5e  d95c2440             fstp dword ptr [esp + 0x40]
// 005b8a62  8d0c24               lea ecx, [esp]
// 005b8a65  89542418             mov dword ptr [esp + 0x18], edx
// 005b8a69  d9542444             fst dword ptr [esp + 0x44]
// 005b8a6d  c744241018fcffff     mov dword ptr [esp + 0x10], 0xfffffc18
// 005b8a75  d9542448             fst dword ptr [esp + 0x48]
// 005b8a79  891424               mov dword ptr [esp], edx
// 005b8a7c  d954244c             fst dword ptr [esp + 0x4c]
// 005b8a80  51                   push ecx
// 005b8a81  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b8a87  d9542454             fst dword ptr [esp + 0x54]
// 005b8a8b  d95c245c             fstp dword ptr [esp + 0x5c]
// 005b8a8f  d9542458             fst dword ptr [esp + 0x58]
// 005b8a93  d9542460             fst dword ptr [esp + 0x60]
// 005b8a97  e9600c0000           jmp 0x5b96fc
// 005b8a9c  d90598728200         fld dword ptr [0x827298]
// 005b8aa2  c744240401000000     mov dword ptr [esp + 4], 1
// 005b8aaa  d95c2408             fstp dword ptr [esp + 8]
// 005b8aae  c744241490e8ffff     mov dword ptr [esp + 0x14], 0xffffe890
// 005b8ab6  d9e8                 fld1 
// 005b8ab8  c74424284cfbffff     mov dword ptr [esp + 0x28], 0xfffffb4c
// 005b8ac0  d954240c             fst dword ptr [esp + 0xc]
// 005b8ac4  c744243ccf000000     mov dword ptr [esp + 0x3c], 0xcf
// 005b8acc  d90534798300         fld dword ptr [0x837934]
// 005b8ad2  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b8ad6  d90504e78100         fld dword ptr [0x81e704]
// 005b8adc  d95c2420             fstp dword ptr [esp + 0x20]
// 005b8ae0  d95c2424             fstp dword ptr [esp + 0x24]
// 005b8ae4  d9059c838100         fld dword ptr [0x81839c]
// 005b8aea  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b8aee  d9ee                 fldz 
// 005b8af0  d9542430             fst dword ptr [esp + 0x30]
// 005b8af4  d9542434             fst dword ptr [esp + 0x34]
// 005b8af8  d9542438             fst dword ptr [esp + 0x38]
// 005b8afc  d905c46f8200         fld dword ptr [0x826fc4]
// 005b8b02  e9c3feffff           jmp 0x5b89ca
// 005b8b07  d90598728200         fld dword ptr [0x827298]
// 005b8b0d  891424               mov dword ptr [esp], edx
// 005b8b10  d95c2408             fstp dword ptr [esp + 8]
// 005b8b14  c744240403000000     mov dword ptr [esp + 4], 3
// 005b8b1c  d9e8                 fld1 
// 005b8b1e  c744241018fcffff     mov dword ptr [esp + 0x10], 0xfffffc18
// 005b8b26  d954240c             fst dword ptr [esp + 0xc]
// 005b8b2a  c744241450fbffff     mov dword ptr [esp + 0x14], 0xfffffb50
// 005b8b32  d9053c798300         fld dword ptr [0x83793c]
// 005b8b38  89542418             mov dword ptr [esp + 0x18], edx
// 005b8b3c  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b8b40  c74424288efeffff     mov dword ptr [esp + 0x28], 0xfffffe8e
// 005b8b48  d90530798300         fld dword ptr [0x837930]
// 005b8b4e  c744243c06040000     mov dword ptr [esp + 0x3c], 0x406
// 005b8b56  d95c2420             fstp dword ptr [esp + 0x20]
// 005b8b5a  d95c2424             fstp dword ptr [esp + 0x24]
// 005b8b5e  d9054c798300         fld dword ptr [0x83794c]
// 005b8b64  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b8b68  d9ee                 fldz 
// 005b8b6a  d9542430             fst dword ptr [esp + 0x30]
// 005b8b6e  d9542434             fst dword ptr [esp + 0x34]
// 005b8b72  d9542438             fst dword ptr [esp + 0x38]
// 005b8b76  d90548798300         fld dword ptr [0x837948]
// 005b8b7c  d95c2440             fstp dword ptr [esp + 0x40]
// 005b8b80  d9542444             fst dword ptr [esp + 0x44]
// 005b8b84  d9542448             fst dword ptr [esp + 0x48]
// 005b8b88  d954244c             fst dword ptr [esp + 0x4c]
// 005b8b8c  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b8b92  d9542450             fst dword ptr [esp + 0x50]
// 005b8b96  d95c2458             fstp dword ptr [esp + 0x58]
// 005b8b9a  d9542454             fst dword ptr [esp + 0x54]
// 005b8b9e  d954245c             fst dword ptr [esp + 0x5c]
// 005b8ba2  d90544798300         fld dword ptr [0x837944]
// 005b8ba8  d95c2460             fstp dword ptr [esp + 0x60]
// 005b8bac  d905e06d8200         fld dword ptr [0x826de0]
// 005b8bb2  d95c2464             fstp dword ptr [esp + 0x64]
// 005b8bb6  d90540798300         fld dword ptr [0x837940]
// 005b8bbc  d95c2468             fstp dword ptr [esp + 0x68]
// 005b8bc0  d95c246c             fstp dword ptr [esp + 0x6c]
// 005b8bc4  d905a4638100         fld dword ptr [0x8163a4]
// 005b8bca  8d0c24               lea ecx, [esp]
// 005b8bcd  d95c2470             fstp dword ptr [esp + 0x70]
// 005b8bd1  d9052c798300         fld dword ptr [0x83792c]
// 005b8bd7  c74424783f000000     mov dword ptr [esp + 0x78], 0x3f
// 005b8bdf  51                   push ecx
// 005b8be0  e94b0b0000           jmp 0x5b9730
// 005b8be5  d905c0888200         fld dword ptr [0x8288c0]
// 005b8beb  c744240404000000     mov dword ptr [esp + 4], 4
// 005b8bf3  d95c2408             fstp dword ptr [esp + 8]
// 005b8bf7  c744241490e8ffff     mov dword ptr [esp + 0x14], 0xffffe890
// 005b8bff  d9e8                 fld1 
// 005b8c01  c7442428a0faffff     mov dword ptr [esp + 0x28], 0xfffffaa0
// 005b8c09  d954240c             fst dword ptr [esp + 0xc]
// 005b8c0d  c744243cb0fbffff     mov dword ptr [esp + 0x3c], 0xfffffbb0
// 005b8c15  d905ac9b8100         fld dword ptr [0x819bac]
// 005b8c1b  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b8c1f  d90504e78100         fld dword ptr [0x81e704]
// 005b8c25  d95c2420             fstp dword ptr [esp + 0x20]
// 005b8c29  d95c2424             fstp dword ptr [esp + 0x24]
// 005b8c2d  d90528798300         fld dword ptr [0x837928]
// 005b8c33  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b8c37  d9ee                 fldz 
// 005b8c39  d9542430             fst dword ptr [esp + 0x30]
// 005b8c3d  d9542434             fst dword ptr [esp + 0x34]
// 005b8c41  d9542438             fst dword ptr [esp + 0x38]
// 005b8c45  d90524798300         fld dword ptr [0x837924]
// 005b8c4b  e97afdffff           jmp 0x5b89ca
// 005b8c50  d90520798300         fld dword ptr [0x837920]
// 005b8c56  c744240405000000     mov dword ptr [esp + 4], 5
// 005b8c5e  d95c2408             fstp dword ptr [esp + 8]
// 005b8c62  c7442414d4feffff     mov dword ptr [esp + 0x14], 0xfffffed4
// 005b8c6a  d9e8                 fld1 
// 005b8c6c  c744242839fdffff     mov dword ptr [esp + 0x28], 0xfffffd39
// 005b8c74  d954240c             fst dword ptr [esp + 0xc]
// 005b8c78  c744243c53000000     mov dword ptr [esp + 0x3c], 0x53
// 005b8c80  d9051c798300         fld dword ptr [0x83791c]
// 005b8c86  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b8c8a  d90518798300         fld dword ptr [0x837918]
// 005b8c90  d95c2420             fstp dword ptr [esp + 0x20]
// 005b8c94  d95c2424             fstp dword ptr [esp + 0x24]
// 005b8c98  d90514798300         fld dword ptr [0x837914]
// 005b8c9e  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b8ca2  d9ee                 fldz 
// 005b8ca4  d9542430             fst dword ptr [esp + 0x30]
// 005b8ca8  d9542434             fst dword ptr [esp + 0x34]
// 005b8cac  d9542438             fst dword ptr [esp + 0x38]
// 005b8cb0  d90510798300         fld dword ptr [0x837910]
// 005b8cb6  e9a3fdffff           jmp 0x5b8a5e
// 005b8cbb  d9050c798300         fld dword ptr [0x83790c]
// 005b8cc1  c744240406000000     mov dword ptr [esp + 4], 6
// 005b8cc9  d95c2408             fstp dword ptr [esp + 8]
// 005b8ccd  c744241424feffff     mov dword ptr [esp + 0x14], 0xfffffe24
// 005b8cd5  d9e8                 fld1 
// 005b8cd7  c7442428ebfcffff     mov dword ptr [esp + 0x28], 0xfffffceb
// 005b8cdf  d954240c             fst dword ptr [esp + 0xc]
// 005b8ce3  c744243cdffeffff     mov dword ptr [esp + 0x3c], 0xfffffedf
// 005b8ceb  d90508798300         fld dword ptr [0x837908]
// 005b8cf1  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b8cf5  d90504798300         fld dword ptr [0x837904]
// 005b8cfb  d95c2420             fstp dword ptr [esp + 0x20]
// 005b8cff  d95c2424             fstp dword ptr [esp + 0x24]
// 005b8d03  d90588748200         fld dword ptr [0x827488]
// 005b8d09  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b8d0d  d9ee                 fldz 
// 005b8d0f  d9542430             fst dword ptr [esp + 0x30]
// 005b8d13  d9542434             fst dword ptr [esp + 0x34]
// 005b8d17  d9542438             fst dword ptr [esp + 0x38]
// 005b8d1b  d90500798300         fld dword ptr [0x837900]
// 005b8d21  e9a4fcffff           jmp 0x5b89ca
// 005b8d26  d905fc788300         fld dword ptr [0x8378fc]
// 005b8d2c  c744240407000000     mov dword ptr [esp + 4], 7
// 005b8d34  d95c2408             fstp dword ptr [esp + 8]
// 005b8d38  c74424140cfeffff     mov dword ptr [esp + 0x14], 0xfffffe0c
// 005b8d40  d9e8                 fld1 
// 005b8d42  c744242832fbffff     mov dword ptr [esp + 0x28], 0xfffffb32
// 005b8d4a  d954240c             fst dword ptr [esp + 0xc]
// 005b8d4e  c744243cfeffffff     mov dword ptr [esp + 0x3c], 0xfffffffe
// 005b8d56  d905f8788300         fld dword ptr [0x8378f8]
// 005b8d5c  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b8d60  d905b8888200         fld dword ptr [0x8288b8]
// 005b8d66  d95c2420             fstp dword ptr [esp + 0x20]
// 005b8d6a  d95c2424             fstp dword ptr [esp + 0x24]
// 005b8d6e  d90588748200         fld dword ptr [0x827488]
// 005b8d74  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b8d78  d9ee                 fldz 
// 005b8d7a  d9542430             fst dword ptr [esp + 0x30]
// 005b8d7e  d9542434             fst dword ptr [esp + 0x34]
// 005b8d82  d9542438             fst dword ptr [esp + 0x38]
// 005b8d86  d905f4788300         fld dword ptr [0x8378f4]
// 005b8d8c  e9cdfcffff           jmp 0x5b8a5e
// 005b8d91  d905f0788300         fld dword ptr [0x8378f0]
// 005b8d97  c744240408000000     mov dword ptr [esp + 4], 8
// 005b8d9f  d95c2408             fstp dword ptr [esp + 8]
// 005b8da3  c7442428a6fdffff     mov dword ptr [esp + 0x28], 0xfffffda6
// 005b8dab  d9e8                 fld1 
// 005b8dad  c744243cd2feffff     mov dword ptr [esp + 0x3c], 0xfffffed2
// 005b8db5  d954240c             fst dword ptr [esp + 0xc]
// 005b8db9  d905ec788300         fld dword ptr [0x8378ec]
// 005b8dbf  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b8dc3  d905e8788300         fld dword ptr [0x8378e8]
// 005b8dc9  d95c2420             fstp dword ptr [esp + 0x20]
// 005b8dcd  d95c2424             fstp dword ptr [esp + 0x24]
// 005b8dd1  d905e4788300         fld dword ptr [0x8378e4]
// 005b8dd7  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b8ddb  d9ee                 fldz 
// 005b8ddd  d9542430             fst dword ptr [esp + 0x30]
// 005b8de1  d9542434             fst dword ptr [esp + 0x34]
// 005b8de5  d9542438             fst dword ptr [esp + 0x38]
// 005b8de9  d905e0788300         fld dword ptr [0x8378e0]
// 005b8def  d95c2440             fstp dword ptr [esp + 0x40]
// 005b8df3  89542418             mov dword ptr [esp + 0x18], edx
// 005b8df7  89542414             mov dword ptr [esp + 0x14], edx
// 005b8dfb  d9542444             fst dword ptr [esp + 0x44]
// 005b8dff  891424               mov dword ptr [esp], edx
// 005b8e02  d9542448             fst dword ptr [esp + 0x48]
// 005b8e06  8d1424               lea edx, [esp]
// 005b8e09  d954244c             fst dword ptr [esp + 0x4c]
// 005b8e0d  c744241018fcffff     mov dword ptr [esp + 0x10], 0xfffffc18
// 005b8e15  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b8e1b  c74424781f000000     mov dword ptr [esp + 0x78], 0x1f
// 005b8e23  d9542450             fst dword ptr [esp + 0x50]
// 005b8e27  52                   push edx
// 005b8e28  d95c245c             fstp dword ptr [esp + 0x5c]
// 005b8e2c  d9542458             fst dword ptr [esp + 0x58]
// 005b8e30  d9542460             fst dword ptr [esp + 0x60]
// 005b8e34  e9cb080000           jmp 0x5b9704
// 005b8e39  d905dc788300         fld dword ptr [0x8378dc]
// 005b8e3f  c744240409000000     mov dword ptr [esp + 4], 9
// 005b8e47  d95c2408             fstp dword ptr [esp + 8]
// 005b8e4b  c744241446fdffff     mov dword ptr [esp + 0x14], 0xfffffd46
// 005b8e53  d9e8                 fld1 
// 005b8e55  c744242872fbffff     mov dword ptr [esp + 0x28], 0xfffffb72
// 005b8e5d  d954240c             fst dword ptr [esp + 0xc]
// 005b8e61  c744243c10000000     mov dword ptr [esp + 0x3c], 0x10
// 005b8e69  d905d8788300         fld dword ptr [0x8378d8]
// 005b8e6f  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b8e73  d905d4788300         fld dword ptr [0x8378d4]
// 005b8e79  d95c2420             fstp dword ptr [esp + 0x20]
// 005b8e7d  d95c2424             fstp dword ptr [esp + 0x24]
// 005b8e81  d90588748200         fld dword ptr [0x827488]
// 005b8e87  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b8e8b  d9ee                 fldz 
// 005b8e8d  d9542430             fst dword ptr [esp + 0x30]
// 005b8e91  d9542434             fst dword ptr [esp + 0x34]
// 005b8e95  d9542438             fst dword ptr [esp + 0x38]
// 005b8e99  d90500798300         fld dword ptr [0x837900]
// 005b8e9f  e9bafbffff           jmp 0x5b8a5e
// 005b8ea4  d905d0788300         fld dword ptr [0x8378d0]
// 005b8eaa  b918fcffff           mov ecx, 0xfffffc18
// 005b8eaf  d95c2408             fstp dword ptr [esp + 8]
// 005b8eb3  891424               mov dword ptr [esp], edx
// 005b8eb6  d9e8                 fld1 
// 005b8eb8  c74424040a000000     mov dword ptr [esp + 4], 0xa
// 005b8ec0  d954240c             fst dword ptr [esp + 0xc]
// 005b8ec4  894c2410             mov dword ptr [esp + 0x10], ecx
// 005b8ec8  d905cc788300         fld dword ptr [0x8378cc]
// 005b8ece  894c2414             mov dword ptr [esp + 0x14], ecx
// 005b8ed2  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b8ed6  c7442428a6fdffff     mov dword ptr [esp + 0x28], 0xfffffda6
// 005b8ede  d905c8788300         fld dword ptr [0x8378c8]
// 005b8ee4  c744243cc6000000     mov dword ptr [esp + 0x3c], 0xc6
// 005b8eec  d95c2420             fstp dword ptr [esp + 0x20]
// 005b8ef0  d95c2424             fstp dword ptr [esp + 0x24]
// 005b8ef4  d90588748200         fld dword ptr [0x827488]
// 005b8efa  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b8efe  d9ee                 fldz 
// 005b8f00  d9542430             fst dword ptr [esp + 0x30]
// 005b8f04  d9542434             fst dword ptr [esp + 0x34]
// 005b8f08  d9542438             fst dword ptr [esp + 0x38]
// 005b8f0c  d90500798300         fld dword ptr [0x837900]
// 005b8f12  d95c2440             fstp dword ptr [esp + 0x40]
// 005b8f16  d9542444             fst dword ptr [esp + 0x44]
// 005b8f1a  d9542448             fst dword ptr [esp + 0x48]
// 005b8f1e  d954244c             fst dword ptr [esp + 0x4c]
// 005b8f22  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b8f28  d9542450             fst dword ptr [esp + 0x50]
// 005b8f2c  d95c2458             fstp dword ptr [esp + 0x58]
// 005b8f30  d9542454             fst dword ptr [esp + 0x54]
// 005b8f34  d954245c             fst dword ptr [esp + 0x5c]
// 005b8f38  e9b7070000           jmp 0x5b96f4
// 005b8f3d  d905c4788300         fld dword ptr [0x8378c4]
// 005b8f43  c74424040b000000     mov dword ptr [esp + 4], 0xb
// 005b8f4b  d95c2408             fstp dword ptr [esp + 8]
// 005b8f4f  c744241460f0ffff     mov dword ptr [esp + 0x14], 0xfffff060
// 005b8f57  d9e8                 fld1 
// 005b8f59  c7442428d9f8ffff     mov dword ptr [esp + 0x28], 0xfffff8d9
// 005b8f61  d954240c             fst dword ptr [esp + 0xc]
// 005b8f65  c744243ca2f9ffff     mov dword ptr [esp + 0x3c], 0xfffff9a2
// 005b8f6d  d9051c718200         fld dword ptr [0x82711c]
// 005b8f73  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b8f77  d90504e78100         fld dword ptr [0x81e704]
// 005b8f7d  d95c2420             fstp dword ptr [esp + 0x20]
// 005b8f81  d95c2424             fstp dword ptr [esp + 0x24]
// 005b8f85  d905c46f8200         fld dword ptr [0x826fc4]
// 005b8f8b  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b8f8f  d9ee                 fldz 
// 005b8f91  d9542430             fst dword ptr [esp + 0x30]
// 005b8f95  d9542434             fst dword ptr [esp + 0x34]
// 005b8f99  d9542438             fst dword ptr [esp + 0x38]
// 005b8f9d  d90500798300         fld dword ptr [0x837900]
// 005b8fa3  e9b6faffff           jmp 0x5b8a5e
// 005b8fa8  d905c0788300         fld dword ptr [0x8378c0]
// 005b8fae  c74424040c000000     mov dword ptr [esp + 4], 0xc
// 005b8fb6  d95c2408             fstp dword ptr [esp + 8]
// 005b8fba  c7442414d4feffff     mov dword ptr [esp + 0x14], 0xfffffed4
// 005b8fc2  d9e8                 fld1 
// 005b8fc4  c74424283dfbffff     mov dword ptr [esp + 0x28], 0xfffffb3d
// 005b8fcc  d954240c             fst dword ptr [esp + 0xc]
// 005b8fd0  c744243cb9010000     mov dword ptr [esp + 0x3c], 0x1b9
// 005b8fd8  d9053c798300         fld dword ptr [0x83793c]
// 005b8fde  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b8fe2  d90504798300         fld dword ptr [0x837904]
// 005b8fe8  e9b7f9ffff           jmp 0x5b89a4
// 005b8fed  d905bc788300         fld dword ptr [0x8378bc]
// 005b8ff3  c74424040d000000     mov dword ptr [esp + 4], 0xd
// 005b8ffb  d95c2408             fstp dword ptr [esp + 8]
// 005b8fff  c744241413ffffff     mov dword ptr [esp + 0x14], 0xffffff13
// 005b9007  d9e8                 fld1 
// 005b9009  c744242842fbffff     mov dword ptr [esp + 0x28], 0xfffffb42
// 005b9011  d954240c             fst dword ptr [esp + 0xc]
// 005b9015  c744243c8b010000     mov dword ptr [esp + 0x3c], 0x18b
// 005b901d  d905b8788300         fld dword ptr [0x8378b8]
// 005b9023  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b9027  d905b4788300         fld dword ptr [0x8378b4]
// 005b902d  d95c2420             fstp dword ptr [esp + 0x20]
// 005b9031  d95c2424             fstp dword ptr [esp + 0x24]
// 005b9035  d905b0788300         fld dword ptr [0x8378b0]
// 005b903b  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b903f  d9ee                 fldz 
// 005b9041  d9542430             fst dword ptr [esp + 0x30]
// 005b9045  d9542434             fst dword ptr [esp + 0x34]
// 005b9049  d9542438             fst dword ptr [esp + 0x38]
// 005b904d  d90588748200         fld dword ptr [0x827488]
// 005b9053  e906faffff           jmp 0x5b8a5e
// 005b9058  d90550798300         fld dword ptr [0x837950]
// 005b905e  891424               mov dword ptr [esp], edx
// 005b9061  d95c2408             fstp dword ptr [esp + 8]
// 005b9065  c74424040e000000     mov dword ptr [esp + 4], 0xe
// 005b906d  d9051c718200         fld dword ptr [0x82711c]
// 005b9073  c7442414f2feffff     mov dword ptr [esp + 0x14], 0xfffffef2
// 005b907b  d95c240c             fstp dword ptr [esp + 0xc]
// 005b907f  c74424284cfbffff     mov dword ptr [esp + 0x28], 0xfffffb4c
// 005b9087  d9053c798300         fld dword ptr [0x83793c]
// 005b908d  c744243cfcffffff     mov dword ptr [esp + 0x3c], 0xfffffffc
// 005b9095  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b9099  d905ac788300         fld dword ptr [0x8378ac]
// 005b909f  d95c2420             fstp dword ptr [esp + 0x20]
// 005b90a3  d9e8                 fld1 
// 005b90a5  d95c2424             fstp dword ptr [esp + 0x24]
// 005b90a9  d9054c798300         fld dword ptr [0x83794c]
// 005b90af  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b90b3  d9ee                 fldz 
// 005b90b5  d9542430             fst dword ptr [esp + 0x30]
// 005b90b9  d9542434             fst dword ptr [esp + 0x34]
// 005b90bd  d9542438             fst dword ptr [esp + 0x38]
// 005b90c1  d90548798300         fld dword ptr [0x837948]
// 005b90c7  d95c2440             fstp dword ptr [esp + 0x40]
// 005b90cb  d9542444             fst dword ptr [esp + 0x44]
// 005b90cf  d9542448             fst dword ptr [esp + 0x48]
// 005b90d3  d954244c             fst dword ptr [esp + 0x4c]
// 005b90d7  d905a8788300         fld dword ptr [0x8378a8]
// 005b90dd  d95c2450             fstp dword ptr [esp + 0x50]
// 005b90e1  d905a4788300         fld dword ptr [0x8378a4]
// 005b90e7  d95c2454             fstp dword ptr [esp + 0x54]
// 005b90eb  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b90f1  d95c2458             fstp dword ptr [esp + 0x58]
// 005b90f5  d954245c             fst dword ptr [esp + 0x5c]
// 005b90f9  e9ee050000           jmp 0x5b96ec
// 005b90fe  d905a0788300         fld dword ptr [0x8378a0]
// 005b9104  891424               mov dword ptr [esp], edx
// 005b9107  d95c2408             fstp dword ptr [esp + 8]
// 005b910b  c74424040f000000     mov dword ptr [esp + 4], 0xf
// 005b9113  d9051c718200         fld dword ptr [0x82711c]
// 005b9119  c744241018fcffff     mov dword ptr [esp + 0x10], 0xfffffc18
// 005b9121  d95c240c             fstp dword ptr [esp + 0xc]
// 005b9125  c74424141cf3ffff     mov dword ptr [esp + 0x14], 0xfffff31c
// 005b912d  d9053c798300         fld dword ptr [0x83793c]
// 005b9133  89542418             mov dword ptr [esp + 0x18], edx
// 005b9137  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b913b  c744242800f6ffff     mov dword ptr [esp + 0x28], 0xfffff600
// 005b9143  d90530798300         fld dword ptr [0x837930]
// 005b9149  c744243c1bffffff     mov dword ptr [esp + 0x3c], 0xffffff1b
// 005b9151  d95c2420             fstp dword ptr [esp + 0x20]
// 005b9155  d9e8                 fld1 
// 005b9157  d9542424             fst dword ptr [esp + 0x24]
// 005b915b  d9059c788300         fld dword ptr [0x83789c]
// 005b9161  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b9165  d9ee                 fldz 
// 005b9167  d9542430             fst dword ptr [esp + 0x30]
// 005b916b  d9542434             fst dword ptr [esp + 0x34]
// 005b916f  d9542438             fst dword ptr [esp + 0x38]
// 005b9173  d90598788300         fld dword ptr [0x837898]
// 005b9179  d95c2440             fstp dword ptr [esp + 0x40]
// 005b917d  d9542444             fst dword ptr [esp + 0x44]
// 005b9181  d9542448             fst dword ptr [esp + 0x48]
// 005b9185  d954244c             fst dword ptr [esp + 0x4c]
// 005b9189  d905a8788300         fld dword ptr [0x8378a8]
// 005b918f  d95c2450             fstp dword ptr [esp + 0x50]
// 005b9193  d9c9                 fxch st(1)
// 005b9195  d95c2454             fstp dword ptr [esp + 0x54]
// 005b9199  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b919f  d95c2458             fstp dword ptr [esp + 0x58]
// 005b91a3  d954245c             fst dword ptr [esp + 0x5c]
// 005b91a7  d90544798300         fld dword ptr [0x837944]
// 005b91ad  d95c2460             fstp dword ptr [esp + 0x60]
// 005b91b1  d905e06d8200         fld dword ptr [0x826de0]
// 005b91b7  d95c2464             fstp dword ptr [esp + 0x64]
// 005b91bb  d90540798300         fld dword ptr [0x837940]
// 005b91c1  d95c2468             fstp dword ptr [esp + 0x68]
// 005b91c5  d95c246c             fstp dword ptr [esp + 0x6c]
// 005b91c9  d90594788300         fld dword ptr [0x837894]
// 005b91cf  8d0c24               lea ecx, [esp]
// 005b91d2  d95c2470             fstp dword ptr [esp + 0x70]
// 005b91d6  d905a4638100         fld dword ptr [0x8163a4]
// 005b91dc  c74424783f000000     mov dword ptr [esp + 0x78], 0x3f
// 005b91e4  51                   push ecx
// 005b91e5  e946050000           jmp 0x5b9730
// 005b91ea  d90550798300         fld dword ptr [0x837950]
// 005b91f0  891424               mov dword ptr [esp], edx
// 005b91f3  d95c2408             fstp dword ptr [esp + 8]
// 005b91f7  89542418             mov dword ptr [esp + 0x18], edx
// 005b91fb  d905ac9b8100         fld dword ptr [0x819bac]
// 005b9201  8d1424               lea edx, [esp]
// 005b9204  d95c240c             fstp dword ptr [esp + 0xc]
// 005b9208  c744240410000000     mov dword ptr [esp + 4], 0x10
// 005b9210  d9053c798300         fld dword ptr [0x83793c]
// 005b9216  c744241018fcffff     mov dword ptr [esp + 0x10], 0xfffffc18
// 005b921e  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b9222  c7442414e0fcffff     mov dword ptr [esp + 0x14], 0xfffffce0
// 005b922a  d90590788300         fld dword ptr [0x837890]
// 005b9230  c74424281ff7ffff     mov dword ptr [esp + 0x28], 0xfffff71f
// 005b9238  d95c2420             fstp dword ptr [esp + 0x20]
// 005b923c  c744243c65f9ffff     mov dword ptr [esp + 0x3c], 0xfffff965
// 005b9244  d9e8                 fld1 
// 005b9246  c74424783f000000     mov dword ptr [esp + 0x78], 0x3f
// 005b924e  d95c2424             fstp dword ptr [esp + 0x24]
// 005b9252  52                   push edx
// 005b9253  d9054c798300         fld dword ptr [0x83794c]
// 005b9259  d95c2430             fstp dword ptr [esp + 0x30]
// 005b925d  d9ee                 fldz 
// 005b925f  d9542434             fst dword ptr [esp + 0x34]
// 005b9263  d9542438             fst dword ptr [esp + 0x38]
// 005b9267  d954243c             fst dword ptr [esp + 0x3c]
// 005b926b  d90548798300         fld dword ptr [0x837948]
// 005b9271  d95c2444             fstp dword ptr [esp + 0x44]
// 005b9275  d9542448             fst dword ptr [esp + 0x48]
// 005b9279  d954244c             fst dword ptr [esp + 0x4c]
// 005b927d  d9542450             fst dword ptr [esp + 0x50]
// 005b9281  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b9287  d9542454             fst dword ptr [esp + 0x54]
// 005b928b  d95c245c             fstp dword ptr [esp + 0x5c]
// 005b928f  d9542458             fst dword ptr [esp + 0x58]
// 005b9293  d9542460             fst dword ptr [esp + 0x60]
// 005b9297  d90544798300         fld dword ptr [0x837944]
// 005b929d  d95c2464             fstp dword ptr [esp + 0x64]
// 005b92a1  d905e06d8200         fld dword ptr [0x826de0]
// 005b92a7  d95c2468             fstp dword ptr [esp + 0x68]
// 005b92ab  d90540798300         fld dword ptr [0x837940]
// 005b92b1  d95c246c             fstp dword ptr [esp + 0x6c]
// 005b92b5  d95c2470             fstp dword ptr [esp + 0x70]
// 005b92b9  d905a49b8100         fld dword ptr [0x819ba4]
// 005b92bf  d95c2474             fstp dword ptr [esp + 0x74]
// 005b92c3  d905a4638100         fld dword ptr [0x8163a4]
// 005b92c9  e962040000           jmp 0x5b9730
// 005b92ce  d905a4638100         fld dword ptr [0x8163a4]
// 005b92d4  8d0c24               lea ecx, [esp]
// 005b92d7  d9542408             fst dword ptr [esp + 8]
// 005b92db  891424               mov dword ptr [esp], edx
// 005b92de  d9058c788300         fld dword ptr [0x83788c]
// 005b92e4  c744240411000000     mov dword ptr [esp + 4], 0x11
// 005b92ec  d95c240c             fstp dword ptr [esp + 0xc]
// 005b92f0  c744241018fcffff     mov dword ptr [esp + 0x10], 0xfffffc18
// 005b92f8  d9053c798300         fld dword ptr [0x83793c]
// 005b92fe  c74424143cf6ffff     mov dword ptr [esp + 0x14], 0xfffff63c
// 005b9306  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b930a  89542418             mov dword ptr [esp + 0x18], edx
// 005b930e  d90588788300         fld dword ptr [0x837888]
// 005b9314  c744242824f5ffff     mov dword ptr [esp + 0x28], 0xfffff524
// 005b931c  d95c2420             fstp dword ptr [esp + 0x20]
// 005b9320  c744243c66faffff     mov dword ptr [esp + 0x3c], 0xfffffa66
// 005b9328  d9e8                 fld1 
// 005b932a  c74424781f000000     mov dword ptr [esp + 0x78], 0x1f
// 005b9332  d9542424             fst dword ptr [esp + 0x24]
// 005b9336  51                   push ecx
// 005b9337  d9051c718200         fld dword ptr [0x82711c]
// 005b933d  d95c2430             fstp dword ptr [esp + 0x30]
// 005b9341  d9ee                 fldz 
// 005b9343  d9542434             fst dword ptr [esp + 0x34]
// 005b9347  d9542438             fst dword ptr [esp + 0x38]
// 005b934b  d954243c             fst dword ptr [esp + 0x3c]
// 005b934f  d90504e78100         fld dword ptr [0x81e704]
// 005b9355  d95c2444             fstp dword ptr [esp + 0x44]
// 005b9359  d9542448             fst dword ptr [esp + 0x48]
// 005b935d  d954244c             fst dword ptr [esp + 0x4c]
// 005b9361  d9542450             fst dword ptr [esp + 0x50]
// 005b9365  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b936b  d9542454             fst dword ptr [esp + 0x54]
// 005b936f  d95c245c             fstp dword ptr [esp + 0x5c]
// 005b9373  d9c9                 fxch st(1)
// 005b9375  d95c2458             fstp dword ptr [esp + 0x58]
// 005b9379  d9542460             fst dword ptr [esp + 0x60]
// 005b937d  d90544798300         fld dword ptr [0x837944]
// 005b9383  d95c2464             fstp dword ptr [esp + 0x64]
// 005b9387  d905e06d8200         fld dword ptr [0x826de0]
// 005b938d  d95c2468             fstp dword ptr [esp + 0x68]
// 005b9391  d90540798300         fld dword ptr [0x837940]
// 005b9397  d95c246c             fstp dword ptr [esp + 0x6c]
// 005b939b  d95c2470             fstp dword ptr [esp + 0x70]
// 005b939f  d90584788300         fld dword ptr [0x837884]
// 005b93a5  d95c2474             fstp dword ptr [esp + 0x74]
// 005b93a9  e982030000           jmp 0x5b9730
// 005b93ae  d90580788300         fld dword ptr [0x837880]
// 005b93b4  b918fcffff           mov ecx, 0xfffffc18
// 005b93b9  d95c2408             fstp dword ptr [esp + 8]
// 005b93bd  891424               mov dword ptr [esp], edx
// 005b93c0  d9e8                 fld1 
// 005b93c2  c744240412000000     mov dword ptr [esp + 4], 0x12
// 005b93ca  d954240c             fst dword ptr [esp + 0xc]
// 005b93ce  894c2410             mov dword ptr [esp + 0x10], ecx
// 005b93d2  d9053c798300         fld dword ptr [0x83793c]
// 005b93d8  894c2414             mov dword ptr [esp + 0x14], ecx
// 005b93dc  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b93e0  c7442428f0d8ffff     mov dword ptr [esp + 0x28], 0xffffd8f0
// 005b93e8  d90538798300         fld dword ptr [0x837938]
// 005b93ee  c744243cf4010000     mov dword ptr [esp + 0x3c], 0x1f4
// 005b93f6  d95c2420             fstp dword ptr [esp + 0x20]
// 005b93fa  d95c2424             fstp dword ptr [esp + 0x24]
// 005b93fe  d9057c788300         fld dword ptr [0x83787c]
// 005b9404  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b9408  d9ee                 fldz 
// 005b940a  d9542430             fst dword ptr [esp + 0x30]
// 005b940e  d9542434             fst dword ptr [esp + 0x34]
// 005b9412  d9542438             fst dword ptr [esp + 0x38]
// 005b9416  d90578788300         fld dword ptr [0x837878]
// 005b941c  d95c2440             fstp dword ptr [esp + 0x40]
// 005b9420  d9542444             fst dword ptr [esp + 0x44]
// 005b9424  d9542448             fst dword ptr [esp + 0x48]
// 005b9428  d954244c             fst dword ptr [esp + 0x4c]
// 005b942c  d905a8788300         fld dword ptr [0x8378a8]
// 005b9432  d95c2450             fstp dword ptr [esp + 0x50]
// 005b9436  d905b8888200         fld dword ptr [0x8288b8]
// 005b943c  d95c2454             fstp dword ptr [esp + 0x54]
// 005b9440  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b9446  d95c2458             fstp dword ptr [esp + 0x58]
// 005b944a  d954245c             fst dword ptr [esp + 0x5c]
// 005b944e  e9a1020000           jmp 0x5b96f4
// 005b9453  d90574788300         fld dword ptr [0x837874]
// 005b9459  891424               mov dword ptr [esp], edx
// 005b945c  d95c2408             fstp dword ptr [esp + 8]
// 005b9460  c744240413000000     mov dword ptr [esp + 4], 0x13
// 005b9468  d90588788300         fld dword ptr [0x837888]
// 005b946e  c744241018fcffff     mov dword ptr [esp + 0x10], 0xfffffc18
// 005b9476  d95c240c             fstp dword ptr [esp + 0xc]
// 005b947a  c744241430f8ffff     mov dword ptr [esp + 0x14], 0xfffff830
// 005b9482  d9053c798300         fld dword ptr [0x83793c]
// 005b9488  89542418             mov dword ptr [esp + 0x18], edx
// 005b948c  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b9490  c74424285ef6ffff     mov dword ptr [esp + 0x28], 0xfffff65e
// 005b9498  d905ac9b8100         fld dword ptr [0x819bac]
// 005b949e  c744243c7af8ffff     mov dword ptr [esp + 0x3c], 0xfffff87a
// 005b94a6  d95c2420             fstp dword ptr [esp + 0x20]
// 005b94aa  d9e8                 fld1 
// 005b94ac  d9542424             fst dword ptr [esp + 0x24]
// 005b94b0  d90570788300         fld dword ptr [0x837870]
// 005b94b6  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b94ba  d9ee                 fldz 
// 005b94bc  d9542430             fst dword ptr [esp + 0x30]
// 005b94c0  d9542434             fst dword ptr [esp + 0x34]
// 005b94c4  d9542438             fst dword ptr [esp + 0x38]
// 005b94c8  d90504e78100         fld dword ptr [0x81e704]
// 005b94ce  d95c2440             fstp dword ptr [esp + 0x40]
// 005b94d2  d9542444             fst dword ptr [esp + 0x44]
// 005b94d6  d9542448             fst dword ptr [esp + 0x48]
// 005b94da  d954244c             fst dword ptr [esp + 0x4c]
// 005b94de  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b94e4  d9542450             fst dword ptr [esp + 0x50]
// 005b94e8  d95c2458             fstp dword ptr [esp + 0x58]
// 005b94ec  d9c9                 fxch st(1)
// 005b94ee  d95c2454             fstp dword ptr [esp + 0x54]
// 005b94f2  d954245c             fst dword ptr [esp + 0x5c]
// 005b94f6  d90544798300         fld dword ptr [0x837944]
// 005b94fc  d95c2460             fstp dword ptr [esp + 0x60]
// 005b9500  d905e06d8200         fld dword ptr [0x826de0]
// 005b9506  d95c2464             fstp dword ptr [esp + 0x64]
// 005b950a  d90540798300         fld dword ptr [0x837940]
// 005b9510  d95c2468             fstp dword ptr [esp + 0x68]
// 005b9514  d95c246c             fstp dword ptr [esp + 0x6c]
// 005b9518  d9056c788300         fld dword ptr [0x83786c]
// 005b951e  e9acfcffff           jmp 0x5b91cf
// 005b9523  d90568788300         fld dword ptr [0x837868]
// 005b9529  c744240414000000     mov dword ptr [esp + 4], 0x14
// 005b9531  d95c2408             fstp dword ptr [esp + 8]
// 005b9535  c7442428adfaffff     mov dword ptr [esp + 0x28], 0xfffffaad
// 005b953d  d9e8                 fld1 
// 005b953f  c744243c7ffbffff     mov dword ptr [esp + 0x3c], 0xfffffb7f
// 005b9547  d954240c             fst dword ptr [esp + 0xc]
// 005b954b  d90564788300         fld dword ptr [0x837864]
// 005b9551  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b9555  d9057ce38100         fld dword ptr [0x81e37c]
// 005b955b  d95c2420             fstp dword ptr [esp + 0x20]
// 005b955f  d95c2424             fstp dword ptr [esp + 0x24]
// 005b9563  d90560788300         fld dword ptr [0x837860]
// 005b9569  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b956d  d9ee                 fldz 
// 005b956f  d9542430             fst dword ptr [esp + 0x30]
// 005b9573  d9542434             fst dword ptr [esp + 0x34]
// 005b9577  d9542438             fst dword ptr [esp + 0x38]
// 005b957b  d90514798300         fld dword ptr [0x837914]
// 005b9581  e969f8ffff           jmp 0x5b8def
// 005b9586  d9055c788300         fld dword ptr [0x83785c]
// 005b958c  b918fcffff           mov ecx, 0xfffffc18
// 005b9591  d95c2408             fstp dword ptr [esp + 8]
// 005b9595  891424               mov dword ptr [esp], edx
// 005b9598  d905489b8100         fld dword ptr [0x819b48]
// 005b959e  c744240415000000     mov dword ptr [esp + 4], 0x15
// 005b95a6  d95c240c             fstp dword ptr [esp + 0xc]
// 005b95aa  894c2410             mov dword ptr [esp + 0x10], ecx
// 005b95ae  d90558788300         fld dword ptr [0x837858]
// 005b95b4  894c2414             mov dword ptr [esp + 0x14], ecx
// 005b95b8  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b95bc  89542418             mov dword ptr [esp + 0x18], edx
// 005b95c0  d90554788300         fld dword ptr [0x837854]
// 005b95c6  c7442428ad010000     mov dword ptr [esp + 0x28], 0x1ad
// 005b95ce  d95c2420             fstp dword ptr [esp + 0x20]
// 005b95d2  c744243cff030000     mov dword ptr [esp + 0x3c], 0x3ff
// 005b95da  d9e8                 fld1 
// 005b95dc  d95c2424             fstp dword ptr [esp + 0x24]
// 005b95e0  d90550788300         fld dword ptr [0x837850]
// 005b95e6  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b95ea  d9ee                 fldz 
// 005b95ec  d9542430             fst dword ptr [esp + 0x30]
// 005b95f0  d9542434             fst dword ptr [esp + 0x34]
// 005b95f4  d9542438             fst dword ptr [esp + 0x38]
// 005b95f8  d9054c788300         fld dword ptr [0x83784c]
// 005b95fe  d95c2440             fstp dword ptr [esp + 0x40]
// 005b9602  d9542444             fst dword ptr [esp + 0x44]
// 005b9606  d9542448             fst dword ptr [esp + 0x48]
// 005b960a  d954244c             fst dword ptr [esp + 0x4c]
// 005b960e  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b9614  d9542450             fst dword ptr [esp + 0x50]
// 005b9618  d95c2458             fstp dword ptr [esp + 0x58]
// 005b961c  d9542454             fst dword ptr [esp + 0x54]
// 005b9620  d954245c             fst dword ptr [esp + 0x5c]
// 005b9624  d90544798300         fld dword ptr [0x837944]
// 005b962a  d95c2460             fstp dword ptr [esp + 0x60]
// 005b962e  d905e06d8200         fld dword ptr [0x826de0]
// 005b9634  d95c2464             fstp dword ptr [esp + 0x64]
// 005b9638  d90540798300         fld dword ptr [0x837940]
// 005b963e  d95c2468             fstp dword ptr [esp + 0x68]
// 005b9642  d95c246c             fstp dword ptr [esp + 0x6c]
// 005b9646  d90548788300         fld dword ptr [0x837848]
// 005b964c  e979f5ffff           jmp 0x5b8bca
// 005b9651  d905c0788300         fld dword ptr [0x8378c0]
// 005b9657  891424               mov dword ptr [esp], edx
// 005b965a  d95c2408             fstp dword ptr [esp + 8]
// 005b965e  c744240416000000     mov dword ptr [esp + 4], 0x16
// 005b9666  d9e8                 fld1 
// 005b9668  c744241460f0ffff     mov dword ptr [esp + 0x14], 0xfffff060
// 005b9670  d954240c             fst dword ptr [esp + 0xc]
// 005b9674  c74424283ffeffff     mov dword ptr [esp + 0x28], 0xfffffe3f
// 005b967c  d9053c798300         fld dword ptr [0x83793c]
// 005b9682  c744243ca4060000     mov dword ptr [esp + 0x3c], 0x6a4
// 005b968a  d95c241c             fstp dword ptr [esp + 0x1c]
// 005b968e  d90504e78100         fld dword ptr [0x81e704]
// 005b9694  d95c2420             fstp dword ptr [esp + 0x20]
// 005b9698  d95c2424             fstp dword ptr [esp + 0x24]
// 005b969c  d9054c798300         fld dword ptr [0x83794c]
// 005b96a2  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b96a6  d9ee                 fldz 
// 005b96a8  d9542430             fst dword ptr [esp + 0x30]
// 005b96ac  d9542434             fst dword ptr [esp + 0x34]
// 005b96b0  d9542438             fst dword ptr [esp + 0x38]
// 005b96b4  d90548798300         fld dword ptr [0x837948]
// 005b96ba  d95c2440             fstp dword ptr [esp + 0x40]
// 005b96be  d9542444             fst dword ptr [esp + 0x44]
// 005b96c2  d9542448             fst dword ptr [esp + 0x48]
// 005b96c6  d954244c             fst dword ptr [esp + 0x4c]
// 005b96ca  d905e4a38300         fld dword ptr [0x83a3e4]
// 005b96d0  d95c2450             fstp dword ptr [esp + 0x50]
// 005b96d4  d9542454             fst dword ptr [esp + 0x54]
// 005b96d8  d90544788300         fld dword ptr [0x837844]
// 005b96de  d95c2458             fstp dword ptr [esp + 0x58]
// 005b96e2  d90540788300         fld dword ptr [0x837840]
// 005b96e8  d95c245c             fstp dword ptr [esp + 0x5c]
// 005b96ec  c744241018fcffff     mov dword ptr [esp + 0x10], 0xfffffc18
// 005b96f4  89542418             mov dword ptr [esp + 0x18], edx
// 005b96f8  8d1424               lea edx, [esp]
// 005b96fb  52                   push edx
// 005b96fc  c744247c3f000000     mov dword ptr [esp + 0x7c], 0x3f
// 005b9704  d90544798300         fld dword ptr [0x837944]
// 005b970a  d95c2464             fstp dword ptr [esp + 0x64]
// 005b970e  d905e06d8200         fld dword ptr [0x826de0]
// 005b9714  d95c2468             fstp dword ptr [esp + 0x68]
// 005b9718  d90540798300         fld dword ptr [0x837940]
// 005b971e  d95c246c             fstp dword ptr [esp + 0x6c]
// 005b9722  d95c2470             fstp dword ptr [esp + 0x70]
// 005b9726  d905a4638100         fld dword ptr [0x8163a4]
// 005b972c  d9542474             fst dword ptr [esp + 0x74]
// 005b9730  50                   push eax
// 005b9731  d95c247c             fstp dword ptr [esp + 0x7c]
// 005b9735  e8ae640e00           call 0x69fbe8
// 005b973a  50                   push eax
// 005b973b  e860f0ffff           call 0x5b87a0
// 005b9740  83c404               add esp, 4
// 005b9743  83c47c               add esp, 0x7c
// 005b9746  c3                   ret 
// 005b9747  90                   nop 
// 005b9748  a9885b0068           test eax, 0x68005b88
// 005b974d  895b00               mov dword ptr [ebx], ebx
// 005b9750  f8                   clc 
// 005b9751  895b00               mov dword ptr [ebx], ebx
// 005b9754  9c                   pushfd 
// 005b9755  8a5b00               mov bl, byte ptr [ebx]
// 005b9758  07                   pop es
// 005b9759  8b5b00               mov ebx, dword ptr [ebx]
// 005b975c  e58b                 in eax, 0x8b
// 005b975e  5b                   pop ebx
// 005b975f  00508c               add byte ptr [eax - 0x74], dl
// 005b9762  5b                   pop ebx
// 005b9763  00bb8c5b0026         add byte ptr [ebx + 0x26005b8c], bh
// 005b9769  8d5b00               lea ebx, [ebx]
// 005b976c  91                   xchg ecx, eax
// 005b976d  8d5b00               lea ebx, [ebx]
// 005b9770  398e5b00a48e         cmp dword ptr [esi - 0x715bffa5], ecx
// 005b9776  5b                   pop ebx
// 005b9777  003d8f5b00a8         add byte ptr [0xa8005b8f], bh
// library rbxgs/roc_reverb_room_ed1e431bee9bec28.cpp (function ?updateAmbientReverb@SoundServiceReverb@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_reverb_room_ed1e431bee9bec28.cpp
