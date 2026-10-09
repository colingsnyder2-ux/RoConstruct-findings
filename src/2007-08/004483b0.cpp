// from server: 86% by colin
// roc 2007-08 004483b0  unit: CIDEDocManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004483b0
//
// 004483b0  51                   push ecx
// 004483b1  56                   push esi
// 004483b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004483b6  8b4608               mov eax, dword ptr [esi + 8]
// 004483b9  85c0                 test eax, eax
// 004483bb  c744240400000000     mov dword ptr [esp + 4], 0
// 004483c3  7505                 jne 0x4483ca
// 004483c5  5e                   pop esi
// 004483c6  59                   pop ecx
// 004483c7  c20c00               ret 0xc
// 004483ca  8b560c               mov edx, dword ptr [esi + 0xc]
// 004483cd  57                   push edi
// 004483ce  8d4c2408             lea ecx, [esp + 8]
// 004483d2  51                   push ecx
// 004483d3  68b44e7800           push 0x784eb4
// 004483d8  52                   push edx
// 004483d9  ffd0                 call eax
// 004483db  8bf8                 mov edi, eax
// 004483dd  85ff                 test edi, edi
// 004483df  7c1e                 jl 0x4483ff
// 004483e1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004483e5  8b542414             mov edx, dword ptr [esp + 0x14]
// 004483e9  8d4614               lea eax, [esi + 0x14]
// 004483ec  50                   push eax
// 004483ed  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004483f1  51                   push ecx
// 004483f2  8b0e                 mov ecx, dword ptr [esi]
// 004483f4  52                   push edx
// 004483f5  50                   push eax
// 004483f6  51                   push ecx
// 004483f7  ff150cf07700         call dword ptr [0x77f00c]
// 004483fd  8bf8                 mov edi, eax
// 004483ff  8b442408             mov eax, dword ptr [esp + 8]
// 00448403  85c0                 test eax, eax
// 00448405  7408                 je 0x44840f
// 00448407  8b10                 mov edx, dword ptr [eax]
// 00448409  50                   push eax
// 0044840a  8b4208               mov eax, dword ptr [edx + 8]
// 0044840d  ffd0                 call eax
// 0044840f  8bc7                 mov eax, edi
// 00448411  5f                   pop edi
// 00448412  5e                   pop esi
// 00448413  59                   pop ecx
// 00448414  c20c00               ret 0xc

struct CIDEDocManager {
    int field0;
    int field4;
    int (__stdcall *field8)(int, const char*, int*);
    int fieldC;
    int field10;
    int field14;
    int Register(int, int, int);
};

extern "C" int __stdcall CoRegisterClassObject(int, int, int, int, int);

int CIDEDocManager::Register(int a, int b, int c)
{
    int result = 0;
    if (field8 == 0)
        return 0;
    int hr = field8(fieldC, (const char*)0x784eb4, &result);
    if (hr >= 0)
        hr = CoRegisterClassObject(field0, a, b, c, (int)&field14);
    if (result != 0) {
        int* p = (int*)result;
        ((void (__stdcall*)(int))p[2])(result);
    }
    return hr;
}
