// from server: 56% by colin
// roc 2007-08 005fb930  unit: RBX::LockTool  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb930
//
// 005fb930  51                   push ecx
// 005fb931  8b4120               mov eax, dword ptr [ecx + 0x20]
// 005fb934  85c0                 test eax, eax
// 005fb936  56                   push esi
// 005fb937  c744240400000000     mov dword ptr [esp + 4], 0
// 005fb93f  7425                 je 0x5fb966
// 005fb941  50                   push eax
// 005fb942  e83992f7ff           call 0x574b80
// 005fb947  8b742410             mov esi, dword ptr [esp + 0x10]
// 005fb94b  83c404               add esp, 4
// 005fb94e  84c0                 test al, al
// 005fb950  8bce                 mov ecx, esi
// 005fb952  7418                 je 0x5fb96c
// 005fb954  6854247c00           push 0x7c2454
// 005fb959  ff1598e67700         call dword ptr [0x77e698]
// 005fb95f  8bc6                 mov eax, esi
// 005fb961  5e                   pop esi
// 005fb962  59                   pop ecx
// 005fb963  c20400               ret 4
// 005fb966  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fb96a  8bce                 mov ecx, esi
// 005fb96c  6848247c00           push 0x7c2448
// 005fb971  ff1598e67700         call dword ptr [0x77e698]
// 005fb977  8bc6                 mov eax, esi
// 005fb979  5e                   pop esi
// 005fb97a  59                   pop ecx
// 005fb97b  c20400               ret 4

struct LockTool {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void* getCursorName(void* result);
};

extern "C" int __cdecl func_00574b80(void*);
extern "C" void* __stdcall func_0077e698(const char*);

void* LockTool::getCursorName(void* result)
{
    void* p = field20;
    *(void**)result = 0;
    if (p != 0) {
        if (func_00574b80(p)) {
            func_0077e698("LockCursor");
            return result;
        }
    }
    func_0077e698("UnlockCursor");
    return result;
}
