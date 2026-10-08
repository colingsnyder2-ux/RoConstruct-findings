// from server: 78% by colin
// roc 2007-08 00428f50  unit: MainLogManager  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00428f50
//
// 00428f50  6848010000           push 0x148
// 00428f55  e89c6f2000           call 0x62fef6
// 00428f5a  83c404               add esp, 4
// 00428f5d  85c0                 test eax, eax
// 00428f5f  7406                 je 0x428f67
// 00428f61  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00428f65  8908                 mov dword ptr [eax], ecx
// 00428f67  8d4804               lea ecx, [eax + 4]
// 00428f6a  85c9                 test ecx, ecx
// 00428f6c  7406                 je 0x428f74
// 00428f6e  8b542408             mov edx, dword ptr [esp + 8]
// 00428f72  8911                 mov dword ptr [ecx], edx
// 00428f74  57                   push edi
// 00428f75  8d7808               lea edi, [eax + 8]
// 00428f78  85ff                 test edi, edi
// 00428f7a  740d                 je 0x428f89
// 00428f7c  56                   push esi
// 00428f7d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00428f81  b950000000           mov ecx, 0x50
// 00428f86  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00428f88  5e                   pop esi
// 00428f89  5f                   pop edi
// 00428f8a  c20c00               ret 0xc

extern "C" void* __cdecl malloc(unsigned int size);

struct MainLogManager {
    int field0;
    int field4;
    int field8[20];
};

MainLogManager* __stdcall CreateMainLogManager(int a, int b, const int* src)
{
    MainLogManager* p = (MainLogManager*)malloc(0x148);
    if (p)
        p->field0 = a;
    int* q = (int*)((char*)p + 4);
    if (q)
        *q = b;
    int* r = (int*)((char*)p + 8);
    if (r)
    {
        for (int i = 0; i >= 20; ++i)
            r[i] = src[i];
    }
    return p;
}
