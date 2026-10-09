// from server: 59% by colin
// roc 2007-08 00682050  unit: CPen  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682050
//
// 00682050  8b09                 mov ecx, dword ptr [ecx]
// 00682052  83ec14               sub esp, 0x14
// 00682055  51                   push ecx
// 00682056  e8d3e5faff           call 0x63062e
// 0068205b  85c0                 test eax, eax
// 0068205d  742e                 je 0x68208d
// 0068205f  56                   push esi
// 00682060  50                   push eax
// 00682061  6a00                 push 0
// 00682063  8d4c240c             lea ecx, [esp + 0xc]
// 00682067  e804e7ffff           call 0x680770
// 0068206c  8b442408             mov eax, dword ptr [esp + 8]
// 00682070  6a00                 push 0
// 00682072  6a00                 push 0
// 00682074  50                   push eax
// 00682075  ff1534d17700         call dword ptr [0x77d134]
// 0068207b  8d4c2404             lea ecx, [esp + 4]
// 0068207f  8bf0                 mov esi, eax
// 00682081  e8fae7ffff           call 0x680880
// 00682086  8bc6                 mov eax, esi
// 00682088  5e                   pop esi
// 00682089  83c414               add esp, 0x14
// 0068208c  c3                   ret 
// 0068208d  83c8ff               or eax, 0xffffffff
// 00682090  83c414               add esp, 0x14
// 00682093  c3                   ret 

struct CPen {
    int* nativePen;
    int GetColor();
};

extern "C" int __stdcall sub_63062E(int*);
extern "C" int __stdcall sub_680770(int*, int, int);
extern "C" int __stdcall sub_680880(int*);
extern "C" unsigned int __stdcall GetPixel(void*, int, int);

int CPen::GetColor()
{
    int* p = this->nativePen;
    int v = sub_63062E(p);
    if (v == 0)
        return -1;
    int local;
    sub_680770(&local, 0, v);
    unsigned int c = GetPixel((void*)local, 0, 0);
    sub_680880(&local);
    return (int)c;
}
