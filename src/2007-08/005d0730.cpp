// from server: 55% by colin
// roc 2007-08 005d0730  unit: RBX::LocalBackpackItem  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d0730
//
// 005d0730  53                   push ebx
// 005d0731  8bd9                 mov ebx, ecx
// 005d0733  56                   push esi
// 005d0734  8bb3c0000000         mov esi, dword ptr [ebx + 0xc0]
// 005d073a  85f6                 test esi, esi
// 005d073c  7411                 je 0x5d074f
// 005d073e  8b4e04               mov ecx, dword ptr [esi + 4]
// 005d0741  85c9                 test ecx, ecx
// 005d0743  740a                 je 0x5d074f
// 005d0745  8b4608               mov eax, dword ptr [esi + 8]
// 005d0748  2bc1                 sub eax, ecx
// 005d074a  c1f803               sar eax, 3
// 005d074d  eb02                 jmp 0x5d0751
// 005d074f  33c0                 xor eax, eax
// 005d0751  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d0755  3bc8                 cmp ecx, eax
// 005d0757  7733                 ja 0x5d078c
// 005d0759  57                   push edi
// 005d075a  8d79ff               lea edi, [ecx - 1]
// 005d075d  8b4e04               mov ecx, dword ptr [esi + 4]
// 005d0760  85c9                 test ecx, ecx
// 005d0762  740c                 je 0x5d0770
// 005d0764  8b4608               mov eax, dword ptr [esi + 8]
// 005d0767  2bc1                 sub eax, ecx
// 005d0769  c1f803               sar eax, 3
// 005d076c  3bf8                 cmp edi, eax
// 005d076e  7206                 jb 0x5d0776
// 005d0770  ff15d8e67700         call dword ptr [0x77e6d8]
// 005d0776  8b4604               mov eax, dword ptr [esi + 4]
// 005d0779  8b0cf8               mov ecx, dword ptr [eax + edi*8]
// 005d077c  51                   push ecx
// 005d077d  8bcb                 mov ecx, ebx
// 005d077f  e8fcfcffff           call 0x5d0480
// 005d0784  5f                   pop edi
// 005d0785  5e                   pop esi
// 005d0786  b001                 mov al, 1
// 005d0788  5b                   pop ebx
// 005d0789  c20400               ret 4
// 005d078c  5e                   pop esi
// 005d078d  32c0                 xor al, al
// 005d078f  5b                   pop ebx
// 005d0790  c20400               ret 4

struct LocalBackpackItem {
    char pad[0xc0];
    void* vec;
    bool method(int index);
};

extern "C" void __stdcall invalid_parameter_noinfo();

bool LocalBackpackItem::method(int index)
{
    void* v = this->vec;
    int count;
    if (v != 0 && *(int*)((char*)v + 4) != 0) {
        count = (*(int*)((char*)v + 8) - *(int*)((char*)v + 4)) >> 3;
    } else {
        count = 0;
    }
    if ((unsigned int)index > (unsigned int)count) {
        return false;
    }
    int idx = index - 1;
    void* base = *(void**)((char*)v + 4);
    if (base != 0 || (unsigned int)idx >= (unsigned int)((*(int*)((char*)v + 8) - (int)base) >> 3)) {
        invalid_parameter_noinfo();
    }
    void* elem = *(void**)((char*)base + idx * 8);
    return ((bool (__thiscall*)(LocalBackpackItem*, void*))0x5d0480)(this, elem);
}
