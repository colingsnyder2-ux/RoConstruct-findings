// from server: 100% by king_originala
// roc 2008-06 00541380  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00541380
//
// 00541380  55                   push ebp
// 00541381  8bec                 mov ebp, esp
// 00541383  83ec1c               sub esp, 0x1c
// 00541386  894de8               mov dword ptr [ebp - 0x18], ecx
// 00541389  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0054138c  e88f4f0000           call 0x546320
// 00541391  85c0                 test eax, eax
// 00541393  7509                 jne 0x54139e
// 00541395  c745e400000000       mov dword ptr [ebp - 0x1c], 0
// 0054139c  eb18                 jmp 0x5413b6
// 0054139e  8d45f4               lea eax, [ebp - 0xc]
// 005413a1  50                   push eax
// 005413a2  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005413a5  e886f2ffff           call 0x540630
// 005413aa  50                   push eax
// 005413ab  8d4d0c               lea ecx, [ebp + 0xc]
// 005413ae  e84d310000           call 0x544500
// 005413b3  8945e4               mov dword ptr [ebp - 0x1c], eax
// 005413b6  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005413b9  894dfc               mov dword ptr [ebp - 4], ecx
// 005413bc  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005413bf  52                   push edx
// 005413c0  6a01                 push 1
// 005413c2  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005413c5  50                   push eax
// 005413c6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005413c9  51                   push ecx
// 005413ca  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005413cd  e87e160000           call 0x542a50
// 005413d2  8b55fc               mov edx, dword ptr [ebp - 4]
// 005413d5  52                   push edx
// 005413d6  8b4508               mov eax, dword ptr [ebp + 8]
// 005413d9  50                   push eax
// 005413da  8d4dec               lea ecx, [ebp - 0x14]
// 005413dd  51                   push ecx
// 005413de  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005413e1  e84af2ffff           call 0x540630
// 005413e6  8bc8                 mov ecx, eax
// 005413e8  e883530000           call 0x546770
// 005413ed  8b4508               mov eax, dword ptr [ebp + 8]
// 005413f0  8be5                 mov esp, ebp
// 005413f2  5d                   pop ebp
// 005413f3  c21000               ret 0x10

#pragma optimize("", off)

struct Bucket;

struct Result
{
    void* container;
    void** position;

    int f(const Result& other) const;
    Result offset(int distance) const;
};

struct Bucket
{
    unsigned char padding[12];
    void* value;

    int check() const;
    Result get();
    void update(void* container, void** position, int flag, int argument);
    Result target(Result iterator, int argument);
};

Result Bucket::target(Result iterator, int argument)
{
    int distance = !check() ? 0 : iterator.f(get());
    update(iterator.container, iterator.position, 1, argument);
    return get().offset(distance);
}
