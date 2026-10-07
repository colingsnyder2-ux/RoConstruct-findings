// roc 2010-06 00580e80  unit: seg_00580000  size: 983 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00580e80
//
// 00580e80  81ec3c010000         sub esp, 0x13c
// 00580e86  53                   push ebx
// 00580e87  55                   push ebp
// 00580e88  8bac2448010000       mov ebp, dword ptr [esp + 0x148]
// 00580e8f  8b8570010000         mov eax, dword ptr [ebp + 0x170]
// 00580e95  8b8d78010000         mov ecx, dword ptr [ebp + 0x178]
// 00580e9b  8b9d98010000         mov ebx, dword ptr [ebp + 0x198]
// 00580ea1  89442414             mov dword ptr [esp + 0x14], eax
// 00580ea5  b801000000           mov eax, 1
// 00580eaa  d3e0                 shl eax, cl
// 00580eac  56                   push esi
// 00580ead  895c2420             mov dword ptr [esp + 0x20], ebx
// 00580eb1  89442440             mov dword ptr [esp + 0x40], eax
// 00580eb5  83c8ff               or eax, 0xffffffff
// 00580eb8  d3e0                 shl eax, cl
// 00580eba  83bdfc00000000       cmp dword ptr [ebp + 0xfc], 0
// 00580ec1  8944243c             mov dword ptr [esp + 0x3c], eax
// 00580ec5  741b                 je 0x580ee2
// 00580ec7  837b2800             cmp dword ptr [ebx + 0x28], 0
// 00580ecb  7515                 jne 0x580ee2
// 00580ecd  8bf5                 mov esi, ebp
// 00580ecf  e8ccf9ffff           call 0x5808a0
// 00580ed4  84c0                 test al, al
// 00580ed6  750a                 jne 0x580ee2
// 00580ed8  5e                   pop esi
// 00580ed9  5d                   pop ebp
// 00580eda  5b                   pop ebx
// 00580edb  81c43c010000         add esp, 0x13c
// 00580ee1  c3                   ret 
// 00580ee2  807b0800             cmp byte ptr [ebx + 8], 0
// 00580ee6  57                   push edi
// 00580ee7  0f855d020000         jne 0x58114a
// 00580eed  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00580ef0  896c2438             mov dword ptr [esp + 0x38], ebp
// 00580ef4  8b08                 mov ecx, dword ptr [eax]
// 00580ef6  894c2428             mov dword ptr [esp + 0x28], ecx
// 00580efa  8b5004               mov edx, dword ptr [eax + 4]
// 00580efd  8b8c2454010000       mov ecx, dword ptr [esp + 0x154]
// 00580f04  8954242c             mov dword ptr [esp + 0x2c], edx
// 00580f08  8b11                 mov edx, dword ptr [ecx]
// 00580f0a  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 00580f0d  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00580f10  8b730c               mov esi, dword ptr [ebx + 0xc]
// 00580f13  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00580f16  894c2448             mov dword ptr [esp + 0x48], ecx
// 00580f1a  8b8d6c010000         mov ecx, dword ptr [ebp + 0x16c]
// 00580f20  89442410             mov dword ptr [esp + 0x10], eax
// 00580f24  89542420             mov dword ptr [esp + 0x20], edx
// 00580f28  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00580f30  894c2414             mov dword ptr [esp + 0x14], ecx
// 00580f34  85c0                 test eax, eax
// 00580f36  0f855f010000         jne 0x58109b
// 00580f3c  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 00580f40  0f8fe4010000         jg 0x58112a
// 00580f46  83ff08               cmp edi, 8
// 00580f49  7d2d                 jge 0x580f78
// 00580f4b  6a00                 push 0
// 00580f4d  57                   push edi
// 00580f4e  8d542430             lea edx, [esp + 0x30]
// 00580f52  56                   push esi
// 00580f53  52                   push edx
// 00580f54  e807f1ffff           call 0x580060
// 00580f59  83c410               add esp, 0x10
// 00580f5c  84c0                 test al, al
// 00580f5e  0f84cb020000         je 0x58122f
// 00580f64  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00580f68  83ff08               cmp edi, 8
// 00580f6b  8b742430             mov esi, dword ptr [esp + 0x30]
// 00580f6f  7d07                 jge 0x580f78
// 00580f71  b801000000           mov eax, 1
// 00580f76  eb2c                 jmp 0x580fa4
// 00580f78  8b542448             mov edx, dword ptr [esp + 0x48]
// 00580f7c  8d4ff8               lea ecx, [edi - 8]
// 00580f7f  8bc6                 mov eax, esi
// 00580f81  d3f8                 sar eax, cl
// 00580f83  25ff000000           and eax, 0xff
// 00580f88  8b8c8290000000       mov ecx, dword ptr [edx + eax*4 + 0x90]
// 00580f8f  85c9                 test ecx, ecx
// 00580f91  740c                 je 0x580f9f
// 00580f93  0fb6ac1090040000     movzx ebp, byte ptr [eax + edx + 0x490]
// 00580f9b  2bf9                 sub edi, ecx
// 00580f9d  eb2c                 jmp 0x580fcb
// 00580f9f  b809000000           mov eax, 9
// 00580fa4  50                   push eax
// 00580fa5  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00580fa9  50                   push eax
// 00580faa  57                   push edi
// 00580fab  8d4c2434             lea ecx, [esp + 0x34]
// 00580faf  56                   push esi
// 00580fb0  51                   push ecx
// 00580fb1  e8caf1ffff           call 0x580180
// 00580fb6  8be8                 mov ebp, eax
// 00580fb8  83c414               add esp, 0x14
// 00580fbb  85ed                 test ebp, ebp
// 00580fbd  0f8c6c020000         jl 0x58122f
// 00580fc3  8b742430             mov esi, dword ptr [esp + 0x30]
// 00580fc7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00580fcb  8bcd                 mov ecx, ebp
// 00580fcd  c1f904               sar ecx, 4
// 00580fd0  83e50f               and ebp, 0xf
// 00580fd3  894c2418             mov dword ptr [esp + 0x18], ecx
// 00580fd7  746a                 je 0x581043
// 00580fd9  83fd01               cmp ebp, 1
// 00580fdc  741d                 je 0x580ffb
// 00580fde  8b842450010000       mov eax, dword ptr [esp + 0x150]
// 00580fe5  8b10                 mov edx, dword ptr [eax]
// 00580fe7  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 00580fee  8b08                 mov ecx, dword ptr [eax]
// 00580ff0  8b5104               mov edx, dword ptr [ecx + 4]
// 00580ff3  6aff                 push -1
// 00580ff5  50                   push eax
// 00580ff6  ffd2                 call edx
// 00580ff8  83c408               add esp, 8
// 00580ffb  83ff01               cmp edi, 1
// 00580ffe  7d21                 jge 0x581021
// 00581000  6a01                 push 1
// 00581002  57                   push edi
// 00581003  8d442430             lea eax, [esp + 0x30]
// 00581007  56                   push esi
// 00581008  50                   push eax
// 00581009  e852f0ffff           call 0x580060
// 0058100e  83c410               add esp, 0x10
// 00581011  84c0                 test al, al
// 00581013  0f8416020000         je 0x58122f
// 00581019  8b742430             mov esi, dword ptr [esp + 0x30]
// 0058101d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00581021  4f                   dec edi
// 00581022  8bcf                 mov ecx, edi
// 00581024  8bd6                 mov edx, esi
// 00581026  d3fa                 sar edx, cl
// 00581028  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058102c  f6c201               test dl, 1
// 0058102f  7409                 je 0x58103a
// 00581031  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00581035  e92a010000           jmp 0x581164
// 0058103a  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0058103e  e921010000           jmp 0x581164
// 00581043  83f90f               cmp ecx, 0xf
// 00581046  0f8418010000         je 0x581164
// 0058104c  bb01000000           mov ebx, 1
// 00581051  d3e3                 shl ebx, cl
// 00581053  895c2410             mov dword ptr [esp + 0x10], ebx
// 00581057  85c9                 test ecx, ecx
// 00581059  7435                 je 0x581090
// 0058105b  3bf9                 cmp edi, ecx
// 0058105d  7d20                 jge 0x58107f
// 0058105f  51                   push ecx
// 00581060  57                   push edi
// 00581061  8d542430             lea edx, [esp + 0x30]
// 00581065  56                   push esi
// 00581066  52                   push edx
// 00581067  e8f4efffff           call 0x580060
// 0058106c  83c410               add esp, 0x10
// 0058106f  84c0                 test al, al
// 00581071  0f84b8010000         je 0x58122f
// 00581077  8b742430             mov esi, dword ptr [esp + 0x30]
// 0058107b  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0058107f  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 00581083  8bc6                 mov eax, esi
// 00581085  8bcf                 mov ecx, edi
// 00581087  d3f8                 sar eax, cl
// 00581089  4b                   dec ebx
// 0058108a  23c3                 and eax, ebx
// 0058108c  01442410             add dword ptr [esp + 0x10], eax
// 00581090  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00581094  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 0058109b  837c241000           cmp dword ptr [esp + 0x10], 0
// 005810a0  0f8684000000         jbe 0x58112a
// 005810a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005810aa  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 005810ae  7f76                 jg 0x581126
// 005810b0  8b0c85f834a200       mov ecx, dword ptr [eax*4 + 0xa234f8]
// 005810b7  8b542420             mov edx, dword ptr [esp + 0x20]
// 005810bb  66833c4a00           cmp word ptr [edx + ecx*2], 0
// 005810c0  8d1c4a               lea ebx, [edx + ecx*2]
// 005810c3  744e                 je 0x581113
// 005810c5  83ff01               cmp edi, 1
// 005810c8  7d21                 jge 0x5810eb
// 005810ca  6a01                 push 1
// 005810cc  57                   push edi
// 005810cd  8d442430             lea eax, [esp + 0x30]
// 005810d1  56                   push esi
// 005810d2  50                   push eax
// 005810d3  e888efffff           call 0x580060
// 005810d8  83c410               add esp, 0x10
// 005810db  84c0                 test al, al
// 005810dd  0f844c010000         je 0x58122f
// 005810e3  8b742430             mov esi, dword ptr [esp + 0x30]
// 005810e7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005810eb  4f                   dec edi
// 005810ec  8bd6                 mov edx, esi
// 005810ee  8bcf                 mov ecx, edi
// 005810f0  d3fa                 sar edx, cl
// 005810f2  f6c201               test dl, 1
// 005810f5  741c                 je 0x581113
// 005810f7  0fb703               movzx eax, word ptr [ebx]
// 005810fa  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005810fe  0fbfd0               movsx edx, ax
// 00581101  85d1                 test ecx, edx
// 00581103  750e                 jne 0x581113
// 00581105  6685c0               test ax, ax
// 00581108  7d04                 jge 0x58110e
// 0058110a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0058110e  03c1                 add eax, ecx
// 00581110  668903               mov word ptr [ebx], ax
// 00581113  8b442414             mov eax, dword ptr [esp + 0x14]
// 00581117  40                   inc eax
// 00581118  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0058111c  89442414             mov dword ptr [esp + 0x14], eax
// 00581120  7e8e                 jle 0x5810b0
// 00581122  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00581126  ff4c2410             dec dword ptr [esp + 0x10]
// 0058112a  8b5518               mov edx, dword ptr [ebp + 0x18]
// 0058112d  8b442428             mov eax, dword ptr [esp + 0x28]
// 00581131  8902                 mov dword ptr [edx], eax
// 00581133  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00581136  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0058113a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058113e  895104               mov dword ptr [ecx + 4], edx
// 00581141  89730c               mov dword ptr [ebx + 0xc], esi
// 00581144  897b10               mov dword ptr [ebx + 0x10], edi
// 00581147  894314               mov dword ptr [ebx + 0x14], eax
// 0058114a  ff4b28               dec dword ptr [ebx + 0x28]
// 0058114d  5f                   pop edi
// 0058114e  5e                   pop esi
// 0058114f  5d                   pop ebp
// 00581150  b001                 mov al, 1
// 00581152  5b                   pop ebx
// 00581153  81c43c010000         add esp, 0x13c
// 00581159  c3                   ret 
// 0058115a  8d9b00000000         lea ebx, [ebx]
// 00581160  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00581164  8b542414             mov edx, dword ptr [esp + 0x14]
// 00581168  8b0495f834a200       mov eax, dword ptr [edx*4 + 0xa234f8]
// 0058116f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00581173  66833c4300           cmp word ptr [ebx + eax*2], 0
// 00581178  8d1c43               lea ebx, [ebx + eax*2]
// 0058117b  7457                 je 0x5811d4
// 0058117d  83ff01               cmp edi, 1
// 00581180  7d21                 jge 0x5811a3
// 00581182  6a01                 push 1
// 00581184  57                   push edi
// 00581185  8d4c2430             lea ecx, [esp + 0x30]
// 00581189  56                   push esi
// 0058118a  51                   push ecx
// 0058118b  e8d0eeffff           call 0x580060
// 00581190  83c410               add esp, 0x10
// 00581193  84c0                 test al, al
// 00581195  0f8494000000         je 0x58122f
// 0058119b  8b742430             mov esi, dword ptr [esp + 0x30]
// 0058119f  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005811a3  4f                   dec edi
// 005811a4  8bd6                 mov edx, esi
// 005811a6  8bcf                 mov ecx, edi
// 005811a8  d3fa                 sar edx, cl
// 005811aa  f6c201               test dl, 1
// 005811ad  742e                 je 0x5811dd
// 005811af  0fb703               movzx eax, word ptr [ebx]
// 005811b2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005811b6  0fbfd0               movsx edx, ax
// 005811b9  85d1                 test ecx, edx
// 005811bb  7520                 jne 0x5811dd
// 005811bd  6685c0               test ax, ax
// 005811c0  7c07                 jl 0x5811c9
// 005811c2  03c1                 add eax, ecx
// 005811c4  668903               mov word ptr [ebx], ax
// 005811c7  eb14                 jmp 0x5811dd
// 005811c9  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005811cd  03c1                 add eax, ecx
// 005811cf  668903               mov word ptr [ebx], ax
// 005811d2  eb09                 jmp 0x5811dd
// 005811d4  83e901               sub ecx, 1
// 005811d7  894c2418             mov dword ptr [esp + 0x18], ecx
// 005811db  7813                 js 0x5811f0
// 005811dd  8b542414             mov edx, dword ptr [esp + 0x14]
// 005811e1  42                   inc edx
// 005811e2  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 005811e6  89542414             mov dword ptr [esp + 0x14], edx
// 005811ea  0f8e70ffffff         jle 0x581160
// 005811f0  85ed                 test ebp, ebp
// 005811f2  741c                 je 0x581210
// 005811f4  8b0495f834a200       mov eax, dword ptr [edx*4 + 0xa234f8]
// 005811fb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005811ff  66892c41             mov word ptr [ecx + eax*2], bp
// 00581203  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00581207  89448c4c             mov dword ptr [esp + ecx*4 + 0x4c], eax
// 0058120b  41                   inc ecx
// 0058120c  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00581210  42                   inc edx
// 00581211  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00581215  89542414             mov dword ptr [esp + 0x14], edx
// 00581219  0f8e27fdffff         jle 0x580f46
// 0058121f  8bac2450010000       mov ebp, dword ptr [esp + 0x150]
// 00581226  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0058122a  e9fbfeffff           jmp 0x58112a
// 0058122f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00581233  85c0                 test eax, eax
// 00581235  7e13                 jle 0x58124a
// 00581237  8b548448             mov edx, dword ptr [esp + eax*4 + 0x48]
// 0058123b  8b742420             mov esi, dword ptr [esp + 0x20]
// 0058123f  48                   dec eax
// 00581240  33c9                 xor ecx, ecx
// 00581242  66890c56             mov word ptr [esi + edx*2], cx
// 00581246  85c0                 test eax, eax
// 00581248  7fed                 jg 0x581237
// 0058124a  5f                   pop edi
// 0058124b  5e                   pop esi
// 0058124c  5d                   pop ebp
// 0058124d  32c0                 xor al, al
// 0058124f  5b                   pop ebx
// 00581250  81c43c010000         add esp, 0x13c
// 00581256  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
