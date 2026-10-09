// from server: 71% by colin
// roc 2007-08 00439f50  unit: RBX::VSoundId::?$XItem  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00439f50
//
// 00439f50  53                   push ebx
// 00439f51  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00439f55  55                   push ebp
// 00439f56  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00439f5a  56                   push esi
// 00439f5b  8b742418             mov esi, dword ptr [esp + 0x18]
// 00439f5f  57                   push edi
// 00439f60  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00439f64  3bf7                 cmp esi, edi
// 00439f66  741f                 je 0x439f87
// 00439f68  8b442430             mov eax, dword ptr [esp + 0x30]
// 00439f6c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00439f70  03c1                 add eax, ecx
// 00439f72  89442418             mov dword ptr [esp + 0x18], eax
// 00439f76  8b16                 mov edx, dword ptr [esi]
// 00439f78  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00439f7c  52                   push edx
// 00439f7d  53                   push ebx
// 00439f7e  ffd5                 call ebp
// 00439f80  83c604               add esi, 4
// 00439f83  3bf7                 cmp esi, edi
// 00439f85  75ef                 jne 0x439f76
// 00439f87  8b442414             mov eax, dword ptr [esp + 0x14]
// 00439f8b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00439f8f  8b542430             mov edx, dword ptr [esp + 0x30]
// 00439f93  8928                 mov dword ptr [eax], ebp
// 00439f95  894804               mov dword ptr [eax + 4], ecx
// 00439f98  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00439f9c  5f                   pop edi
// 00439f9d  895008               mov dword ptr [eax + 8], edx
// 00439fa0  8b542438             mov edx, dword ptr [esp + 0x38]
// 00439fa4  5e                   pop esi
// 00439fa5  89580c               mov dword ptr [eax + 0xc], ebx
// 00439fa8  5d                   pop ebp
// 00439fa9  894810               mov dword ptr [eax + 0x10], ecx
// 00439fac  895014               mov dword ptr [eax + 0x14], edx
// 00439faf  5b                   pop ebx
// 00439fb0  c3                   ret 

struct Item {
    int value;
    int index;
};

struct XItem {
    void f(int* first, int* last, int* out, int a, int b, int c, int d, int e);
};

void XItem::f(int* first, int* last, int* out, int a, int b, int c, int d, int e)
{
    int* p = first;
    if (p != last) {
        int sum = c + d;
        do {
            int v = *p;
            ((void (__stdcall*)(int, int, int))a)(v, b, sum);
            p++;
        } while (p != last);
    }
    out[0] = a;
    out[1] = c;
    out[2] = d;
    out[3] = b;
    out[4] = e;
    out[5] = e;
}
