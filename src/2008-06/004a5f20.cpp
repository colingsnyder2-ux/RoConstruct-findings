// from server: 99% by EspClaude
// roc 2008-06 004a5f20  unit: RBX::VHint::?$FactoryProduct::Creator  size: 466 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5f20
//
// 004a5f20  83ec10               sub esp, 0x10
// 004a5f23  53                   push ebx
// 004a5f24  55                   push ebp
// 004a5f25  56                   push esi
// 004a5f26  8bf1                 mov esi, ecx
// 004a5f28  8b4608               mov eax, dword ptr [esi + 8]
// 004a5f2b  8b2e                 mov ebp, dword ptr [esi]
// 004a5f2d  57                   push edi
// 004a5f2e  8d7801               lea edi, [eax + 1]
// 004a5f31  3bfd                 cmp edi, ebp
// 004a5f33  7f1d                 jg 0x4a5f52
// 004a5f35  8bc8                 mov ecx, eax
// 004a5f37  83e107               and ecx, 7
// 004a5f3a  ba80000000           mov edx, 0x80
// 004a5f3f  d3fa                 sar edx, cl
// 004a5f41  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5f44  c1f803               sar eax, 3
// 004a5f47  841408               test byte ptr [eax + ecx], dl
// 004a5f4a  897e08               mov dword ptr [esi + 8], edi
// 004a5f4d  0f95442413           setne byte ptr [esp + 0x13]
// 004a5f52  8b4608               mov eax, dword ptr [esi + 8]
// 004a5f55  8d7801               lea edi, [eax + 1]
// 004a5f58  3bfd                 cmp edi, ebp
// 004a5f5a  7f1d                 jg 0x4a5f79
// 004a5f5c  8bc8                 mov ecx, eax
// 004a5f5e  83e107               and ecx, 7
// 004a5f61  ba80000000           mov edx, 0x80
// 004a5f66  d3fa                 sar edx, cl
// 004a5f68  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5f6b  c1f803               sar eax, 3
// 004a5f6e  841408               test byte ptr [eax + ecx], dl
// 004a5f71  897e08               mov dword ptr [esi + 8], edi
// 004a5f74  0f95442411           setne byte ptr [esp + 0x11]
// 004a5f79  8b4608               mov eax, dword ptr [esi + 8]
// 004a5f7c  8d7801               lea edi, [eax + 1]
// 004a5f7f  3bfd                 cmp edi, ebp
// 004a5f81  7f1d                 jg 0x4a5fa0
// 004a5f83  8bc8                 mov ecx, eax
// 004a5f85  83e107               and ecx, 7
// 004a5f88  ba80000000           mov edx, 0x80
// 004a5f8d  d3fa                 sar edx, cl
// 004a5f8f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5f92  c1f803               sar eax, 3
// 004a5f95  841408               test byte ptr [eax + ecx], dl
// 004a5f98  897e08               mov dword ptr [esi + 8], edi
// 004a5f9b  0f95442412           setne byte ptr [esp + 0x12]
// 004a5fa0  8b4608               mov eax, dword ptr [esi + 8]
// 004a5fa3  8d7801               lea edi, [eax + 1]
// 004a5fa6  3bfd                 cmp edi, ebp
// 004a5fa8  7f1d                 jg 0x4a5fc7
// 004a5faa  8bc8                 mov ecx, eax
// 004a5fac  83e107               and ecx, 7
// 004a5faf  ba80000000           mov edx, 0x80
// 004a5fb4  d3fa                 sar edx, cl
// 004a5fb6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5fb9  c1f803               sar eax, 3
// 004a5fbc  841408               test byte ptr [eax + ecx], dl
// 004a5fbf  897e08               mov dword ptr [esi + 8], edi
// 004a5fc2  0f95c3               setne bl
// 004a5fc5  eb04                 jmp 0x4a5fcb
// 004a5fc7  8a5c2424             mov bl, byte ptr [esp + 0x24]
// 004a5fcb  6a01                 push 1
// 004a5fcd  6a10                 push 0x10
// 004a5fcf  8d54241c             lea edx, [esp + 0x1c]
// 004a5fd3  52                   push edx
// 004a5fd4  8bce                 mov ecx, esi
// 004a5fd6  e835f2ffff           call 0x4a5210
// 004a5fdb  6a01                 push 1
// 004a5fdd  6a10                 push 0x10
// 004a5fdf  8d442420             lea eax, [esp + 0x20]
// 004a5fe3  50                   push eax
// 004a5fe4  8bce                 mov ecx, esi
// 004a5fe6  e825f2ffff           call 0x4a5210
// 004a5feb  6a01                 push 1
// 004a5fed  6a10                 push 0x10
// 004a5fef  8d4c2424             lea ecx, [esp + 0x24]
// 004a5ff3  51                   push ecx
// 004a5ff4  8bce                 mov ecx, esi
// 004a5ff6  e815f2ffff           call 0x4a5210
// 004a5ffb  84c0                 test al, al
// 004a5ffd  750a                 jne 0x4a6009
// 004a5fff  5f                   pop edi
// 004a6000  5e                   pop esi
// 004a6001  5d                   pop ebp
// 004a6002  5b                   pop ebx
// 004a6003  83c410               add esp, 0x10
// 004a6006  c21000               ret 0x10
// 004a6009  807c241100           cmp byte ptr [esp + 0x11], 0
// 004a600e  741b                 je 0x4a602b
// 004a6010  0fb7542414           movzx edx, word ptr [esp + 0x14]
// 004a6015  89542414             mov dword ptr [esp + 0x14], edx
// 004a6019  db442414             fild dword ptr [esp + 0x14]
// 004a601d  dd05783c8200         fld qword ptr [0x823c78]
// 004a6023  dcc9                 fmul st(1), st(0)
// 004a6025  d9c9                 fxch st(1)
// 004a6027  d9e0                 fchs 
// 004a6029  eb17                 jmp 0x4a6042
// 004a602b  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 004a6030  89442414             mov dword ptr [esp + 0x14], eax
// 004a6034  db442414             fild dword ptr [esp + 0x14]
// 004a6038  dd05783c8200         fld qword ptr [0x823c78]
// 004a603e  dcc9                 fmul st(1), st(0)
// 004a6040  d9c9                 fxch st(1)
// 004a6042  807c241200           cmp byte ptr [esp + 0x12], 0
// 004a6047  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004a604b  d919                 fstp dword ptr [ecx]
// 004a604d  7413                 je 0x4a6062
// 004a604f  0fb7542418           movzx edx, word ptr [esp + 0x18]
// 004a6054  89542428             mov dword ptr [esp + 0x28], edx
// 004a6058  db442428             fild dword ptr [esp + 0x28]
// 004a605c  d8c9                 fmul st(1)
// 004a605e  d9e0                 fchs 
// 004a6060  eb0f                 jmp 0x4a6071
// 004a6062  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 004a6067  89442428             mov dword ptr [esp + 0x28], eax
// 004a606b  db442428             fild dword ptr [esp + 0x28]
// 004a606f  d8c9                 fmul st(1)
// 004a6071  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004a6075  0fb754241c           movzx edx, word ptr [esp + 0x1c]
// 004a607a  d918                 fstp dword ptr [eax]
// 004a607c  84db                 test bl, bl
// 004a607e  740e                 je 0x4a608e
// 004a6080  89542428             mov dword ptr [esp + 0x28], edx
// 004a6084  db442428             fild dword ptr [esp + 0x28]
// 004a6088  dec9                 fmulp st(1)
// 004a608a  d9e0                 fchs 
// 004a608c  eb0a                 jmp 0x4a6098
// 004a608e  89542428             mov dword ptr [esp + 0x28], edx
// 004a6092  db442428             fild dword ptr [esp + 0x28]
// 004a6096  dec9                 fmulp st(1)
// 004a6098  8b542430             mov edx, dword ptr [esp + 0x30]
// 004a609c  d912                 fst dword ptr [edx]
// 004a609e  d901                 fld dword ptr [ecx]
// 004a60a0  d900                 fld dword ptr [eax]
// 004a60a2  d9c1                 fld st(1)
// 004a60a4  deca                 fmulp st(2)
// 004a60a6  d9e8                 fld1 
// 004a60a8  dee2                 fsubrp st(2)
// 004a60aa  dcc8                 fmul st(0), st(0)
// 004a60ac  dee9                 fsubp st(1)
// 004a60ae  d9c1                 fld st(1)
// 004a60b0  deca                 fmulp st(2)
// 004a60b2  dee1                 fsubrp st(1)
// 004a60b4  d9ee                 fldz 
// 004a60b6  d8d1                 fcom st(1)
// 004a60b8  dfe0                 fnstsw ax
// 004a60ba  f6c401               test ah, 1
// 004a60bd  7514                 jne 0x4a60d3
// 004a60bf  8b442424             mov eax, dword ptr [esp + 0x24]
// 004a60c3  ddd9                 fstp st(1)
// 004a60c5  5f                   pop edi
// 004a60c6  d918                 fstp dword ptr [eax]
// 004a60c8  5e                   pop esi
// 004a60c9  5d                   pop ebp
// 004a60ca  b001                 mov al, 1
// 004a60cc  5b                   pop ebx
// 004a60cd  83c410               add esp, 0x10
// 004a60d0  c21000               ret 0x10
// 004a60d3  807c241300           cmp byte ptr [esp + 0x13], 0
// 004a60d8  ddd8                 fstp st(0)
// 004a60da  d9fa                 fsqrt 
// 004a60dc  7402                 je 0x4a60e0
// 004a60de  d9e0                 fchs 
// 004a60e0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004a60e4  5f                   pop edi
// 004a60e5  d919                 fstp dword ptr [ecx]
// 004a60e7  5e                   pop esi
// 004a60e8  5d                   pop ebp
// 004a60e9  b001                 mov al, 1
// 004a60eb  5b                   pop ebx
// 004a60ec  83c410               add esp, 0x10
// 004a60ef  c21000               ret 0x10

// from server: 87% by colin
// roc 2008-06 004a5f20  unit: RBX::VHint::?$FactoryProduct::Creator  size: 466 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5f20
//
// 004a5f20  83ec10               sub esp, 0x10
// 004a5f23  53                   push ebx
// 004a5f24  55                   push ebp
// 004a5f25  56                   push esi
// 004a5f26  8bf1                 mov esi, ecx
// 004a5f28  8b4608               mov eax, dword ptr [esi + 8]
// 004a5f2b  8b2e                 mov ebp, dword ptr [esi]
// 004a5f2d  57                   push edi
// 004a5f2e  8d7801               lea edi, [eax + 1]
// 004a5f31  3bfd                 cmp edi, ebp
// 004a5f33  7f1d                 jg 0x4a5f52
// 004a5f35  8bc8                 mov ecx, eax
// 004a5f37  83e107               and ecx, 7
// 004a5f3a  ba80000000           mov edx, 0x80
// 004a5f3f  d3fa                 sar edx, cl
// 004a5f41  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5f44  c1f803               sar eax, 3
// 004a5f47  841408               test byte ptr [eax + ecx], dl
// 004a5f4a  897e08               mov dword ptr [esi + 8], edi
// 004a5f4d  0f95442413           setne byte ptr [esp + 0x13]
// 004a5f52  8b4608               mov eax, dword ptr [esi + 8]
// 004a5f55  8d7801               lea edi, [eax + 1]
// 004a5f58  3bfd                 cmp edi, ebp
// 004a5f5a  7f1d                 jg 0x4a5f79
// 004a5f5c  8bc8                 mov ecx, eax
// 004a5f5e  83e107               and ecx, 7
// 004a5f61  ba80000000           mov edx, 0x80
// 004a5f66  d3fa                 sar edx, cl
// 004a5f68  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5f6b  c1f803               sar eax, 3
// 004a5f6e  841408               test byte ptr [eax + ecx], dl
// 004a5f71  897e08               mov dword ptr [esi + 8], edi
// 004a5f74  0f95442411           setne byte ptr [esp + 0x11]
// 004a5f79  8b4608               mov eax, dword ptr [esi + 8]
// 004a5f7c  8d7801               lea edi, [eax + 1]
// 004a5f7f  3bfd                 cmp edi, ebp
// 004a5f81  7f1d                 jg 0x4a5fa0
// 004a5f83  8bc8                 mov ecx, eax
// 004a5f85  83e107               and ecx, 7
// 004a5f88  ba80000000           mov edx, 0x80
// 004a5f8d  d3fa                 sar edx, cl
// 004a5f8f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5f92  c1f803               sar eax, 3
// 004a5f95  841408               test byte ptr [eax + ecx], dl
// 004a5f98  897e08               mov dword ptr [esi + 8], edi
// 004a5f9b  0f95442412           setne byte ptr [esp + 0x12]
// 004a5fa0  8b4608               mov eax, dword ptr [esi + 8]
// 004a5fa3  8d7801               lea edi, [eax + 1]
// 004a5fa6  3bfd                 cmp edi, ebp
// 004a5fa8  7f1d                 jg 0x4a5fc7
// 004a5faa  8bc8                 mov ecx, eax
// 004a5fac  83e107               and ecx, 7
// 004a5faf  ba80000000           mov edx, 0x80
// 004a5fb4  d3fa                 sar edx, cl
// 004a5fb6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5fb9  c1f803               sar eax, 3
// 004a5fbc  841408               test byte ptr [eax + ecx], dl
// 004a5fbf  897e08               mov dword ptr [esi + 8], edi
// 004a5fc2  0f95c3               setne bl
// 004a5fc5  eb04                 jmp 0x4a5fcb
// 004a5fc7  8a5c2424             mov bl, byte ptr [esp + 0x24]
// 004a5fcb  6a01                 push 1
// 004a5fcd  6a10                 push 0x10
// 004a5fcf  8d54241c             lea edx, [esp + 0x1c]
// 004a5fd3  52                   push edx
// 004a5fd4  8bce                 mov ecx, esi
// 004a5fd6  e835f2ffff           call 0x4a5210
// 004a5fdb  6a01                 push 1
// 004a5fdd  6a10                 push 0x10
// 004a5fdf  8d442420             lea eax, [esp + 0x20]
// 004a5fe3  50                   push eax
// 004a5fe4  8bce                 mov ecx, esi
// 004a5fe6  e825f2ffff           call 0x4a5210
// 004a5feb  6a01                 push 1
// 004a5fed  6a10                 push 0x10
// 004a5fef  8d4c2424             lea ecx, [esp + 0x24]
// 004a5ff3  51                   push ecx
// 004a5ff4  8bce                 mov ecx, esi
// 004a5ff6  e815f2ffff           call 0x4a5210
// 004a5ffb  84c0                 test al, al
// 004a5ffd  750a                 jne 0x4a6009
// 004a5fff  5f                   pop edi
// 004a6000  5e                   pop esi
// 004a6001  5d                   pop ebp
// 004a6002  5b                   pop ebx
// 004a6003  83c410               add esp, 0x10
// 004a6006  c21000               ret 0x10
// 004a6009  807c241100           cmp byte ptr [esp + 0x11], 0
// 004a600e  741b                 je 0x4a602b
// 004a6010  0fb7542414           movzx edx, word ptr [esp + 0x14]
// 004a6015  89542414             mov dword ptr [esp + 0x14], edx
// 004a6019  db442414             fild dword ptr [esp + 0x14]
// 004a601d  dd05783c8200         fld qword ptr [0x823c78]
// 004a6023  dcc9                 fmul st(1), st(0)
// 004a6025  d9c9                 fxch st(1)
// 004a6027  d9e0                 fchs 
// 004a6029  eb17                 jmp 0x4a6042
// 004a602b  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 004a6030  89442414             mov dword ptr [esp + 0x14], eax
// 004a6034  db442414             fild dword ptr [esp + 0x14]
// 004a6038  dd05783c8200         fld qword ptr [0x823c78]
// 004a603e  dcc9                 fmul st(1), st(0)
// 004a6040  d9c9                 fxch st(1)
// 004a6042  807c241200           cmp byte ptr [esp + 0x12], 0
// 004a6047  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004a604b  d919                 fstp dword ptr [ecx]
// 004a604d  7413                 je 0x4a6062
// 004a604f  0fb7542418           movzx edx, word ptr [esp + 0x18]
// 004a6054  89542428             mov dword ptr [esp + 0x28], edx
// 004a6058  db442428             fild dword ptr [esp + 0x28]
// 004a605c  d8c9                 fmul st(1)
// 004a605e  d9e0                 fchs 
// 004a6060  eb0f                 jmp 0x4a6071
// 004a6062  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 004a6067  89442428             mov dword ptr [esp + 0x28], eax
// 004a606b  db442428             fild dword ptr [esp + 0x28]
// 004a606f  d8c9                 fmul st(1)
// 004a6071  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004a6075  0fb754241c           movzx edx, word ptr [esp + 0x1c]
// 004a607a  d918                 fstp dword ptr [eax]
// 004a607c  84db                 test bl, bl
// 004a607e  740e                 je 0x4a608e
// 004a6080  89542428             mov dword ptr [esp + 0x28], edx
// 004a6084  db442428             fild dword ptr [esp + 0x28]
// 004a6088  dec9                 fmulp st(1)
// 004a608a  d9e0                 fchs 
// 004a608c  eb0a                 jmp 0x4a6098
// 004a608e  89542428             mov dword ptr [esp + 0x28], edx
// 004a6092  db442428             fild dword ptr [esp + 0x28]
// 004a6096  dec9                 fmulp st(1)
// 004a6098  8b542430             mov edx, dword ptr [esp + 0x30]
// 004a609c  d912                 fst dword ptr [edx]
// 004a609e  d901                 fld dword ptr [ecx]
// 004a60a0  d900                 fld dword ptr [eax]
// 004a60a2  d9c1                 fld st(1)
// 004a60a4  deca                 fmulp st(2)
// 004a60a6  d9e8                 fld1 
// 004a60a8  dee2                 fsubrp st(2)
// 004a60aa  dcc8                 fmul st(0), st(0)
// 004a60ac  dee9                 fsubp st(1)
// 004a60ae  d9c1                 fld st(1)
// 004a60b0  deca                 fmulp st(2)
// 004a60b2  dee1                 fsubrp st(1)
// 004a60b4  d9ee                 fldz 
// 004a60b6  d8d1                 fcom st(1)
// 004a60b8  dfe0                 fnstsw ax
// 004a60ba  f6c401               test ah, 1
// 004a60bd  7514                 jne 0x4a60d3
// 004a60bf  8b442424             mov eax, dword ptr [esp + 0x24]
// 004a60c3  ddd9                 fstp st(1)
// 004a60c5  5f                   pop edi
// 004a60c6  d918                 fstp dword ptr [eax]
// 004a60c8  5e                   pop esi
// 004a60c9  5d                   pop ebp
// 004a60ca  b001                 mov al, 1
// 004a60cc  5b                   pop ebx
// 004a60cd  83c410               add esp, 0x10
// 004a60d0  c21000               ret 0x10
// 004a60d3  807c241300           cmp byte ptr [esp + 0x13], 0
// 004a60d8  ddd8                 fstp st(0)
// 004a60da  d9fa                 fsqrt 
// 004a60dc  7402                 je 0x4a60e0
// 004a60de  d9e0                 fchs 
// 004a60e0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004a60e4  5f                   pop edi
// 004a60e5  d919                 fstp dword ptr [ecx]
// 004a60e7  5e                   pop esi
// 004a60e8  5d                   pop ebp
// 004a60e9  b001                 mov al, 1
// 004a60eb  5b                   pop ebx
// 004a60ec  83c410               add esp, 0x10
// 004a60ef  c21000               ret 0x10

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct S
{
    int bitCount;
    int capacity;
    int readOffset;
    unsigned char* data;

    bool readBits(unsigned char* output, int count, bool rightAligned);
    bool readQuaternion(float& w, float& x, float& y, float& z);
    inline bool Read(bool& var)
    {
        if (readOffset + 1 > bitCount)
            return false;
        if (data[readOffset >> 3] & (0x80 >> (readOffset & 7)))
            var = true;
        else
            var = false;
        readOffset++;
        return true;
    }
};

bool S::readQuaternion(float& w, float& x, float& y, float& z)
{
    bool negativeW, negativeX, negativeY, negativeZ;
    unsigned short encodedX, encodedY, encodedZ;

    Read(negativeW);
    Read(negativeX);
    Read(negativeY);
    Read(negativeZ);

    readBits((unsigned char*)&encodedX, 16, true);
    readBits((unsigned char*)&encodedY, 16, true);
    if (!readBits((unsigned char*)&encodedZ, 16, true))
        return false;

    x = negativeX ? -(encodedX * (1.0 / 65535.0))
                  : encodedX * (1.0 / 65535.0);
    y = negativeY ? -(encodedY * (1.0 / 65535.0))
                  : encodedY * (1.0 / 65535.0);
    z = negativeZ ? -(encodedZ * (1.0 / 65535.0))
                  : encodedZ * (1.0 / 65535.0);

    double remainder = 1.0 - x * x - y * y - z * z;
    w = (float)(remainder <= 0.0
                    ? 0.0
                    : (negativeW ? -sqrt(remainder) : sqrt(remainder)));
    return true;
}
