// roc 2007-03 00529ec0  unit: seg_00520000  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00529ec0
//
// 00529ec0  83ec14               sub esp, 0x14
// 00529ec3  836c242801           sub dword ptr [esp + 0x28], 1
// 00529ec8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00529ecc  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 00529ed2  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00529ed5  8b4008               mov eax, dword ptr [eax + 8]
// 00529ed8  890c24               mov dword ptr [esp], ecx
// 00529edb  0f88ed000000         js 0x529fce
// 00529ee1  8b542424             mov edx, dword ptr [esp + 0x24]
// 00529ee5  53                   push ebx
// 00529ee6  55                   push ebp
// 00529ee7  56                   push esi
// 00529ee8  03d2                 add edx, edx
// 00529eea  57                   push edi
// 00529eeb  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00529eef  03d2                 add edx, edx
// 00529ef1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00529ef5  8b31                 mov esi, dword ptr [ecx]
// 00529ef7  8b6f08               mov ebp, dword ptr [edi + 8]
// 00529efa  8b2c2a               mov ebp, dword ptr [edx + ebp]
// 00529efd  83c104               add ecx, 4
// 00529f00  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00529f04  8b0f                 mov ecx, dword ptr [edi]
// 00529f06  8b1c0a               mov ebx, dword ptr [edx + ecx]
// 00529f09  8b4f04               mov ecx, dword ptr [edi + 4]
// 00529f0c  8b0c0a               mov ecx, dword ptr [edx + ecx]
// 00529f0f  896c2428             mov dword ptr [esp + 0x28], ebp
// 00529f13  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00529f17  83c204               add edx, 4
// 00529f1a  85ed                 test ebp, ebp
// 00529f1c  89542420             mov dword ptr [esp + 0x20], edx
// 00529f20  0f8699000000         jbe 0x529fbf
// 00529f26  8b542428             mov edx, dword ptr [esp + 0x28]
// 00529f2a  2bd9                 sub ebx, ecx
// 00529f2c  2bd1                 sub edx, ecx
// 00529f2e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00529f32  8954241c             mov dword ptr [esp + 0x1c], edx
// 00529f36  896c2428             mov dword ptr [esp + 0x28], ebp
// 00529f3a  8d9b00000000         lea ebx, [ebx]
// 00529f40  0fb65602             movzx edx, byte ptr [esi + 2]
// 00529f44  0fb66e01             movzx ebp, byte ptr [esi + 1]
// 00529f48  0fb63e               movzx edi, byte ptr [esi]
// 00529f4b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00529f4f  89542418             mov dword ptr [esp + 0x18], edx
// 00529f53  8b949000080000       mov edx, dword ptr [eax + edx*4 + 0x800]
// 00529f5a  0394a800040000       add edx, dword ptr [eax + ebp*4 + 0x400]
// 00529f61  83c603               add esi, 3
// 00529f64  0314b8               add edx, dword ptr [eax + edi*4]
// 00529f67  83c101               add ecx, 1
// 00529f6a  c1fa10               sar edx, 0x10
// 00529f6d  88540bff             mov byte ptr [ebx + ecx - 1], dl
// 00529f71  8b542418             mov edx, dword ptr [esp + 0x18]
// 00529f75  8b9c9000140000       mov ebx, dword ptr [eax + edx*4 + 0x1400]
// 00529f7c  039ca800100000       add ebx, dword ptr [eax + ebp*4 + 0x1000]
// 00529f83  039cb8000c0000       add ebx, dword ptr [eax + edi*4 + 0xc00]
// 00529f8a  c1fb10               sar ebx, 0x10
// 00529f8d  8859ff               mov byte ptr [ecx - 1], bl
// 00529f90  8b9490001c0000       mov edx, dword ptr [eax + edx*4 + 0x1c00]
// 00529f97  0394a800180000       add edx, dword ptr [eax + ebp*4 + 0x1800]
// 00529f9e  0394b800140000       add edx, dword ptr [eax + edi*4 + 0x1400]
// 00529fa5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00529fa9  c1fa10               sar edx, 0x10
// 00529fac  836c242801           sub dword ptr [esp + 0x28], 1
// 00529fb1  88540fff             mov byte ptr [edi + ecx - 1], dl
// 00529fb5  7589                 jne 0x529f40
// 00529fb7  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00529fbb  8b542420             mov edx, dword ptr [esp + 0x20]
// 00529fbf  836c243801           sub dword ptr [esp + 0x38], 1
// 00529fc4  0f8927ffffff         jns 0x529ef1
// 00529fca  5f                   pop edi
// 00529fcb  5e                   pop esi
// 00529fcc  5d                   pop ebp
// 00529fcd  5b                   pop ebx
// 00529fce  83c414               add esp, 0x14
// 00529fd1  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_convert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
