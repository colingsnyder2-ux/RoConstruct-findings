// from server: 100% by colin
// roc 2007-08 0041fce0  unit: CXTTreeCtrl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041fce0
//
// 0041fce0  56                   push esi
// 0041fce1  8bf1                 mov esi, ecx
// 0041fce3  e856052100           call 0x63023e
// 0041fce8  83f8ff               cmp eax, -1
// 0041fceb  7506                 jne 0x41fcf3
// 0041fced  0bc0                 or eax, eax
// 0041fcef  5e                   pop esi
// 0041fcf0  c20400               ret 4
// 0041fcf3  8b4654               mov eax, dword ptr [esi + 0x54]
// 0041fcf6  8b5044               mov edx, dword ptr [eax + 0x44]
// 0041fcf9  8d4e54               lea ecx, [esi + 0x54]
// 0041fcfc  ffd2                 call edx
// 0041fcfe  33c0                 xor eax, eax
// 0041fd00  5e                   pop esi
// 0041fd01  c20400               ret 4

struct CXTTreeCtrl {
    char pad[0x54];
    void* m_pSomething;
    int GetItem(void*);
};

extern "C" int __stdcall sub_63023e();

int CXTTreeCtrl::GetItem(void* p)
{
    int result = sub_63023e();
    if (result == -1)
        return result;
    void* pObj = *(void**)((char*)this + 0x54);
    void (__thiscall *fn)(void*) = *(void (__thiscall **)(void*))((char*)pObj + 0x44);
    fn((char*)this + 0x54);
    return 0;
}
