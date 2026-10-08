// from server: 69% by colin
// roc 2007-08 005f9fb0  unit: RBX::VSeat::?$FactoryProduct  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f9fb0
//
// 005f9fb0  f6816401000008       test byte ptr [ecx + 0x164], 8
// 005f9fb7  752e                 jne 0x5f9fe7
// 005f9fb9  8b899c010000         mov ecx, dword ptr [ecx + 0x19c]
// 005f9fbf  8b01                 mov eax, dword ptr [ecx]
// 005f9fc1  8b10                 mov edx, dword ptr [eax]
// 005f9fc3  ffd2                 call edx
// 005f9fc5  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005f9fc8  6a07                 push 7
// 005f9fca  83c004               add eax, 4
// 005f9fcd  6814587b00           push 0x7b5814
// 005f9fd2  51                   push ecx
// 005f9fd3  6a00                 push 0
// 005f9fd5  8bc8                 mov ecx, eax
// 005f9fd7  ff15c4e47700         call dword ptr [0x77e4c4]
// 005f9fdd  85c0                 test eax, eax
// 005f9fdf  7506                 jne 0x5f9fe7
// 005f9fe1  b801000000           mov eax, 1
// 005f9fe6  c3                   ret 
// 005f9fe7  33c0                 xor eax, eax
// 005f9fe9  c3                   ret 

struct VSeat {
    bool isRunning();
};

extern "C" int __stdcall compare_helper(const char*, unsigned int, unsigned int, const char*, unsigned int);

bool VSeat::isRunning() {
    if (*(unsigned char*)((char*)this + 0x164) & 8) {
        return false;
    }
    void* p = *(void**)((char*)this + 0x19c);
    void** vtbl = *(void***)p;
    typedef void* (__thiscall *Fn)(void*);
    Fn f = (Fn)vtbl[0];
    void* result = f(p);
    unsigned int len = *(unsigned int*)((char*)result + 0x18);
    void* str = (char*)result + 4;
    int cmp = compare_helper((const char*)str, 0, len, "Running", 7);
    if (cmp == 0) {
        return true;
    }
    return false;
}
