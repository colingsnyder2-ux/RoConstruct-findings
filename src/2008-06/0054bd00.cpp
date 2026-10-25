// from server: 100% by king_originala
// roc 2008-06 0054bd00  unit: RBX::RenderBase::Mesh  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054bd00
//
// 0054bd00  55                   push ebp
// 0054bd01  8bec                 mov ebp, esp
// 0054bd03  83ec24               sub esp, 0x24
// 0054bd06  894de0               mov dword ptr [ebp - 0x20], ecx
// 0054bd09  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0054bd0c  50                   push eax
// 0054bd0d  8d4df8               lea ecx, [ebp - 8]
// 0054bd10  51                   push ecx
// 0054bd11  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0054bd14  e8c70f0000           call 0x54cce0
// 0054bd19  8d55ec               lea edx, [ebp - 0x14]
// 0054bd1c  52                   push edx
// 0054bd1d  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0054bd20  e88b4cffff           call 0x5409b0
// 0054bd25  50                   push eax
// 0054bd26  8d4df8               lea ecx, [ebp - 8]
// 0054bd29  e8a251ffff           call 0x540ed0
// 0054bd2e  0fb6c0               movzx eax, al
// 0054bd31  85c0                 test eax, eax
// 0054bd33  7530                 jne 0x54bd65
// 0054bd35  8d4df8               lea ecx, [ebp - 8]
// 0054bd38  e833020000           call 0x54bf70
// 0054bd3d  50                   push eax
// 0054bd3e  e8cd080000           call 0x54c610
// 0054bd43  83c404               add esp, 4
// 0054bd46  50                   push eax
// 0054bd47  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0054bd4a  51                   push ecx
// 0054bd4b  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0054bd4e  83c108               add ecx, 8
// 0054bd51  e88a130000           call 0x54d0e0
// 0054bd56  0fb6d0               movzx edx, al
// 0054bd59  85d2                 test edx, edx
// 0054bd5b  7508                 jne 0x54bd65
// 0054bd5d  8d45f8               lea eax, [ebp - 8]
// 0054bd60  8945dc               mov dword ptr [ebp - 0x24], eax
// 0054bd63  eb0f                 jmp 0x54bd74
// 0054bd65  8d4de4               lea ecx, [ebp - 0x1c]
// 0054bd68  51                   push ecx
// 0054bd69  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0054bd6c  e83f4cffff           call 0x5409b0
// 0054bd71  8945dc               mov dword ptr [ebp - 0x24], eax
// 0054bd74  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 0054bd77  8955f4               mov dword ptr [ebp - 0xc], edx
// 0054bd7a  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0054bd7d  8b08                 mov ecx, dword ptr [eax]
// 0054bd7f  8b5004               mov edx, dword ptr [eax + 4]
// 0054bd82  8b4508               mov eax, dword ptr [ebp + 8]
// 0054bd85  8908                 mov dword ptr [eax], ecx
// 0054bd87  895004               mov dword ptr [eax + 4], edx
// 0054bd8a  8b4508               mov eax, dword ptr [ebp + 8]
// 0054bd8d  8be5                 mov esp, ebp
// 0054bd8f  5d                   pop ebp
// 0054bd90  c20800               ret 8

struct Result {
    unsigned int value;
    unsigned int owner;
    bool equal(const Result* other);
    unsigned int get();
};

struct Comparator {
    bool less(unsigned int key, unsigned int value);
};

unsigned int __cdecl convert(unsigned int value);

struct S {
    unsigned char padding[8];
    Comparator comparator;

    Result* find(Result* result, unsigned int key);
    Result* end(Result* result);
    Result* f(Result* result, unsigned int key);
};

#pragma optimize("", off)
Result* S::f(Result* result, unsigned int key)
{
    struct Locals {
        Result secondEnd;
        Result firstEnd;
        const Result* selected;
        Result found;
    } locals;

    find(&locals.found, key);
    locals.selected = locals.found.equal(end(&locals.firstEnd)) ||
                      comparator.less(key, convert(locals.found.get()))
                    ? end(&locals.secondEnd)
                    : &locals.found;

    *result = *locals.selected;
    return result;
}
