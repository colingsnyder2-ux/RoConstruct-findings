// from server: 68% by colin
// roc 2007-08 00563c60  unit: CopyVerb  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563c60
//
// 00563c60  6a01                 push 1
// 00563c62  83c114               add ecx, 0x14
// 00563c65  e896e6ffff           call 0x562300
// 00563c6a  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 00563c70  8b4804               mov ecx, dword ptr [eax + 4]
// 00563c73  85c9                 test ecx, ecx
// 00563c75  7509                 jne 0x563c80
// 00563c77  33c0                 xor eax, eax
// 00563c79  3bc8                 cmp ecx, eax
// 00563c7b  1bc0                 sbb eax, eax
// 00563c7d  f7d8                 neg eax
// 00563c7f  c3                   ret 
// 00563c80  8b4008               mov eax, dword ptr [eax + 8]
// 00563c83  2bc1                 sub eax, ecx
// 00563c85  c1f803               sar eax, 3
// 00563c88  33c9                 xor ecx, ecx
// 00563c8a  3bc8                 cmp ecx, eax
// 00563c8c  1bc0                 sbb eax, eax
// 00563c8e  f7d8                 neg eax
// 00563c90  c3                   ret 

struct VerbContainer;

struct Verb {
    char pad[0x14];
    VerbContainer* getContainer();

    bool isEnabled();
};

struct VerbContainer {
    char pad[0x104];
    void* begin;
    void* end;
};

bool Verb::isEnabled()
{
    VerbContainer* c = getContainer();
    void* p = *(void**)((char*)c + 0x104);
    void* b = *(void**)((char*)p + 4);
    if (b == 0) {
        return false;
    }
    void* e = *(void**)((char*)p + 8);
    int n = (int)((char*)e - (char*)b) >> 3;
    return n != 0;
}
