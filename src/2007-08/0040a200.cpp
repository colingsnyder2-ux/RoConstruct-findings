// from server: 68% by colin
// roc 2007-08 0040a200  unit: VCApp::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a200
//
// 0040a200  8b0d5c178800         mov ecx, dword ptr [0x88175c]
// 0040a206  33c0                 xor eax, eax
// 0040a208  85c9                 test ecx, ecx
// 0040a20a  7408                 je 0x40a214
// 0040a20c  390564178800         cmp dword ptr [0x881764], eax
// 0040a212  7515                 jne 0x40a229
// 0040a214  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040a218  50                   push eax
// 0040a219  b950178800           mov ecx, 0x881750
// 0040a21e  e8cdb3ffff           call 0x4055f0
// 0040a223  8b0d5c178800         mov ecx, dword ptr [0x88175c]
// 0040a229  85c9                 test ecx, ecx
// 0040a22b  742b                 je 0x40a258
// 0040a22d  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040a231  8b11                 mov edx, dword ptr [ecx]
// 0040a233  50                   push eax
// 0040a234  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040a238  50                   push eax
// 0040a239  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040a23d  50                   push eax
// 0040a23e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040a242  50                   push eax
// 0040a243  8b442424             mov eax, dword ptr [esp + 0x24]
// 0040a247  50                   push eax
// 0040a248  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040a24c  50                   push eax
// 0040a24d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040a251  50                   push eax
// 0040a252  51                   push ecx
// 0040a253  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 0040a256  ffd1                 call ecx
// 0040a258  c22400               ret 0x24

struct VCAppComObject {
    void Method(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
};

extern "C" void __stdcall sub_4055F0(int a1);

extern int dword_88175C;
extern int dword_881764;
extern char byte_881750;

void VCAppComObject::Method(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    int v9 = dword_88175C;
    if (v9 != 0 || dword_881764 == 0)
    {
        sub_4055F0(a9);
        v9 = dword_88175C;
    }
    if (v9 != 0)
    {
        int* vtbl = *(int**)v9;
        typedef void (__thiscall *Fn)(void*, int, int, int, int, int, int, int, int);
        Fn fn = (Fn)vtbl[11];
        fn((void*)v9, a1, a2, a3, a4, a5, a6, a7, a8);
    }
}
