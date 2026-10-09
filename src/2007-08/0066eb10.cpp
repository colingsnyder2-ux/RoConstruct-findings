// from server: 86% by colin
// roc 2007-08 0066eb10  unit: CXTPDockingPaneManager  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066eb10
//
// 0066eb10  56                   push esi
// 0066eb11  8b742408             mov esi, dword ptr [esp + 8]
// 0066eb15  85f6                 test esi, esi
// 0066eb17  57                   push edi
// 0066eb18  8bf9                 mov edi, ecx
// 0066eb1a  7439                 je 0x66eb55
// 0066eb1c  8d4604               lea eax, [esi + 4]
// 0066eb1f  50                   push eax
// 0066eb20  ff15ecd27700         call dword ptr [0x77d2ec]
// 0066eb26  8b17                 mov edx, dword ptr [edi]
// 0066eb28  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 0066eb2e  56                   push esi
// 0066eb2f  6a03                 push 3
// 0066eb31  8bcf                 mov ecx, edi
// 0066eb33  ffd0                 call eax
// 0066eb35  83f8ff               cmp eax, -1
// 0066eb38  7414                 je 0x66eb4e
// 0066eb3a  837e3000             cmp dword ptr [esi + 0x30], 0
// 0066eb3e  740e                 je 0x66eb4e
// 0066eb40  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0066eb43  8b11                 mov edx, dword ptr [ecx]
// 0066eb45  8b5248               mov edx, dword ptr [edx + 0x48]
// 0066eb48  8d4620               lea eax, [esi + 0x20]
// 0066eb4b  50                   push eax
// 0066eb4c  ffd2                 call edx
// 0066eb4e  8bce                 mov ecx, esi
// 0066eb50  e88f16fcff           call 0x6301e4
// 0066eb55  5f                   pop edi
// 0066eb56  5e                   pop esi
// 0066eb57  c20400               ret 4

extern "C" int __stdcall InterlockedIncrement(int*);
extern "C" void __cdecl func_006301e4();

struct CXTPDockingPaneManager
{
    void func_0066eb10(int* p);
};

void CXTPDockingPaneManager::func_0066eb10(int* p)
{
    if (p != 0)
    {
        InterlockedIncrement(p + 1);
        int r = ((int (__thiscall*)(CXTPDockingPaneManager*, int, int*))*(void**)(*(int*)this + 0x140))(this, 3, p);
        if (r != -1)
        {
            if (p[12] != 0)
            {
                ((void (__thiscall*)(int, int*))*(void**)(*(int*)p[12] + 0x48))(p[12], p + 8);
            }
        }
        func_006301e4();
    }
}
