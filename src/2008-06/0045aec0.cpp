// from server: 100% by colin
// roc 2008-06 0045aec0  unit: G3D::TextureManager::TextureArgs  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045aec0
//
// 0045aec0  56                   push esi
// 0045aec1  8bf1                 mov esi, ecx
// 0045aec3  8b06                 mov eax, dword ptr [esi]
// 0045aec5  8b5014               mov edx, dword ptr [eax + 0x14]
// 0045aec8  6831010000           push 0x131
// 0045aecd  ffd2                 call edx
// 0045aecf  84c0                 test al, al
// 0045aed1  7516                 jne 0x45aee9
// 0045aed3  8b06                 mov eax, dword ptr [esi]
// 0045aed5  8b5014               mov edx, dword ptr [eax + 0x14]
// 0045aed8  6832010000           push 0x132
// 0045aedd  8bce                 mov ecx, esi
// 0045aedf  ffd2                 call edx
// 0045aee1  84c0                 test al, al
// 0045aee3  7504                 jne 0x45aee9
// 0045aee5  33c0                 xor eax, eax
// 0045aee7  5e                   pop esi
// 0045aee8  c3                   ret 
// 0045aee9  b801000000           mov eax, 1
// 0045aeee  5e                   pop esi
// 0045aeef  c3                   ret 

struct S
{
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual bool check(int value);
    int f();
};

int S::f()
{
    if (check(0x131) || check(0x132))
        return 1;
    return 0;
}
