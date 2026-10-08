// from server: 100% by colin
// roc 2007-08 00680550  unit: CXTPBitmapDC  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00680550
//
// 00680550  8b442404             mov eax, dword ptr [esp + 4]
// 00680554  56                   push esi
// 00680555  8bf1                 mov esi, ecx
// 00680557  894604               mov dword ptr [esi + 4], eax
// 0068055a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0068055e  85c0                 test eax, eax
// 00680560  c706d8ec7c00         mov dword ptr [esi], 0x7cecd8
// 00680566  c7460800000000       mov dword ptr [esi + 8], 0
// 0068056d  c7460cffffffff       mov dword ptr [esi + 0xc], 0xffffffff
// 00680574  7406                 je 0x68057c
// 00680576  50                   push eax
// 00680577  e874edffff           call 0x67f2f0
// 0068057c  8bc6                 mov eax, esi
// 0068057e  5e                   pop esi
// 0068057f  c20800               ret 8

struct CXTPBitmapDC
{
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    CXTPBitmapDC(int a, int b);
};

extern "C" int __stdcall sub_67F2F0(int);

CXTPBitmapDC::CXTPBitmapDC(int a, int b)
{
    field4 = a;
    vtable = (void*)0x7cecd8;
    field8 = 0;
    fieldC = -1;
    if (b != 0)
        sub_67F2F0(b);
}
