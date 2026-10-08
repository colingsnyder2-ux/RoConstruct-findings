// from server: 100% by colin
// roc 2007-08 004c5d10  unit: RakPeer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5d10
//
// 004c5d10  83790800             cmp dword ptr [ecx + 8], 0
// 004c5d14  7625                 jbe 0x4c5d3b
// 004c5d16  8b01                 mov eax, dword ptr [ecx]
// 004c5d18  85c0                 test eax, eax
// 004c5d1a  741f                 je 0x4c5d3b
// 004c5d1c  8b48fc               mov ecx, dword ptr [eax - 4]
// 004c5d1f  56                   push esi
// 004c5d20  8d70fc               lea esi, [eax - 4]
// 004c5d23  6820cc4000           push 0x40cc20
// 004c5d28  51                   push ecx
// 004c5d29  6a08                 push 8
// 004c5d2b  50                   push eax
// 004c5d2c  e8c6ad1600           call 0x630af7
// 004c5d31  56                   push esi
// 004c5d32  e82b9f1600           call 0x62fc62
// 004c5d37  83c404               add esp, 4
// 004c5d3a  5e                   pop esi
// 004c5d3b  c3                   ret 

struct RakPeer {
    int field0;
    int field4;
    unsigned int field8;
    void func();
};

extern "C" void __stdcall func_00630af7(void*, int, int, void*);
extern "C" void __cdecl func_0062fc62(void*);

void RakPeer::func()
{
    if (field8 > 0) {
        int* p = (int*)field0;
        if (p != 0) {
            int n = *(int*)((char*)p - 4);
            func_00630af7(p, 8, n, (void*)0x40cc20);
            func_0062fc62((char*)p - 4);
        }
    }
}
