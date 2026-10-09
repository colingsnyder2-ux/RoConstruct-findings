// from server: 66% by colin
// roc 2007-08 006e5470  unit: CXTPDockingPaneSplitterContainer  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e5470
//
// 006e5470  8b81b8010000         mov eax, dword ptr [ecx + 0x1b8]
// 006e5476  83f805               cmp eax, 5
// 006e5479  751f                 jne 0x6e549a
// 006e547b  e8f03af8ff           call 0x668f70
// 006e5480  8bc8                 mov ecx, eax
// 006e5482  e8c935f8ff           call 0x668a50
// 006e5487  85c0                 test eax, eax
// 006e5489  7403                 je 0x6e548e
// 006e548b  33c0                 xor eax, eax
// 006e548d  c3                   ret 
// 006e548e  e8dd3af8ff           call 0x668f70
// 006e5493  8bc8                 mov ecx, eax
// 006e5495  e9d638f8ff           jmp 0x668d70
// 006e549a  83f804               cmp eax, 4
// 006e549d  75ee                 jne 0x6e548d
// 006e549f  e8cc3af8ff           call 0x668f70
// 006e54a4  8bc8                 mov ecx, eax
// 006e54a6  e9b535f8ff           jmp 0x668a60

struct CXTPDockingPaneSplitterContainer {
    char pad[0x1b8];
    int field_0x1b8;
    int f();
};

extern "C" int __stdcall sub_668f70();
extern "C" int __stdcall sub_668a50(int);
extern "C" int __stdcall sub_668a60(int);
extern "C" int __stdcall sub_668d70(int);

int CXTPDockingPaneSplitterContainer::f()
{
    int v = field_0x1b8;
    if (v == 5)
    {
        int a = sub_668f70();
        if (sub_668a50(a) == 0)
        {
            int b = sub_668f70();
            return sub_668d70(b);
        }
        return 0;
    }
    if (v == 4)
    {
        int c = sub_668f70();
        return sub_668a60(c);
    }
    return 0;
}
