// from server: 100% by colin
// roc 2008-06 0062d9e0  unit: RBX::VGeometryService::?$FactoryProduct  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d9e0
//
// 0062d9e0  8b442404             mov eax, dword ptr [esp + 4]
// 0062d9e4  53                   push ebx
// 0062d9e5  55                   push ebp
// 0062d9e6  56                   push esi
// 0062d9e7  8bf1                 mov esi, ecx
// 0062d9e9  8b6e04               mov ebp, dword ptr [esi + 4]
// 0062d9ec  b901000000           mov ecx, 1
// 0062d9f1  894604               mov dword ptr [esi + 4], eax
// 0062d9f4  57                   push edi
// 0062d9f5  840db4c09700         test byte ptr [0x97c0b4], cl
// 0062d9fb  7513                 jne 0x62da10
// 0062d9fd  090db4c09700         or dword ptr [0x97c0b4], ecx
// 0062da03  bb0a000000           mov ebx, 0xa
// 0062da08  891db0c09700         mov dword ptr [0x97c0b0], ebx
// 0062da0e  eb06                 jmp 0x62da16
// 0062da10  8b1db0c09700         mov ebx, dword ptr [0x97c0b0]
// 0062da16  8b4e08               mov ecx, dword ptr [esi + 8]
// 0062da19  8b7e04               mov edi, dword ptr [esi + 4]
// 0062da1c  3bf9                 cmp edi, ecx
// 0062da1e  0f8e8a000000         jle 0x62daae
// 0062da24  85c9                 test ecx, ecx
// 0062da26  7512                 jne 0x62da3a
// 0062da28  55                   push ebp
// 0062da29  8bce                 mov ecx, esi
// 0062da2b  894608               mov dword ptr [esi + 8], eax
// 0062da2e  e84d46edff           call 0x502080
// 0062da33  5f                   pop edi
// 0062da34  5e                   pop esi
// 0062da35  5d                   pop ebp
// 0062da36  5b                   pop ebx
// 0062da37  c20800               ret 8
// 0062da3a  3bfb                 cmp edi, ebx
// 0062da3c  7d12                 jge 0x62da50
// 0062da3e  55                   push ebp
// 0062da3f  8bce                 mov ecx, esi
// 0062da41  895e08               mov dword ptr [esi + 8], ebx
// 0062da44  e83746edff           call 0x502080
// 0062da49  5f                   pop edi
// 0062da4a  5e                   pop esi
// 0062da4b  5d                   pop ebp
// 0062da4c  5b                   pop ebx
// 0062da4d  c20800               ret 8
// 0062da50  d90580e38100         fld dword ptr [0x81e380]
// 0062da56  8bc1                 mov eax, ecx
// 0062da58  03c0                 add eax, eax
// 0062da5a  03c0                 add eax, eax
// 0062da5c  3d801a0600           cmp eax, 0x61a80
// 0062da61  760a                 jbe 0x62da6d
// 0062da63  ddd8                 fstp st(0)
// 0062da65  d9057ce38100         fld dword ptr [0x81e37c]
// 0062da6b  eb0f                 jmp 0x62da7c
// 0062da6d  3d00fa0000           cmp eax, 0xfa00
// 0062da72  7608                 jbe 0x62da7c
// 0062da74  ddd8                 fstp st(0)
// 0062da76  d90534c48100         fld dword ptr [0x81c434]
// 0062da7c  8bd9                 mov ebx, ecx
// 0062da7e  895c2418             mov dword ptr [esp + 0x18], ebx
// 0062da82  da4c2418             fimul dword ptr [esp + 0x18]
// 0062da86  e8653d0700           call 0x6a17f0
// 0062da8b  2bc3                 sub eax, ebx
// 0062da8d  03c7                 add eax, edi
// 0062da8f  894608               mov dword ptr [esi + 8], eax
// 0062da92  8b0db0c09700         mov ecx, dword ptr [0x97c0b0]
// 0062da98  3bc1                 cmp eax, ecx
// 0062da9a  7d03                 jge 0x62da9f
// 0062da9c  894e08               mov dword ptr [esi + 8], ecx
// 0062da9f  55                   push ebp
// 0062daa0  8bce                 mov ecx, esi
// 0062daa2  e8d945edff           call 0x502080
// 0062daa7  5f                   pop edi
// 0062daa8  5e                   pop esi
// 0062daa9  5d                   pop ebp
// 0062daaa  5b                   pop ebx
// 0062daab  c20800               ret 8
// 0062daae  b856555555           mov eax, 0x55555556
// 0062dab3  f7e9                 imul ecx
// 0062dab5  8bc2                 mov eax, edx
// 0062dab7  c1e81f               shr eax, 0x1f
// 0062daba  03c2                 add eax, edx
// 0062dabc  3bf8                 cmp edi, eax
// 0062dabe  7f19                 jg 0x62dad9
// 0062dac0  807c241800           cmp byte ptr [esp + 0x18], 0
// 0062dac5  7412                 je 0x62dad9
// 0062dac7  3bfb                 cmp edi, ebx
// 0062dac9  7e0e                 jle 0x62dad9
// 0062dacb  3bfd                 cmp edi, ebp
// 0062dacd  7c02                 jl 0x62dad1
// 0062dacf  8bfd                 mov edi, ebp
// 0062dad1  57                   push edi
// 0062dad2  8bce                 mov ecx, esi
// 0062dad4  e8a745edff           call 0x502080
// 0062dad9  5f                   pop edi
// 0062dada  5e                   pop esi
// 0062dadb  5d                   pop ebp
// 0062dadc  5b                   pop ebx
// 0062dadd  c20800               ret 8

extern int minimumCapacity;
extern int minimumCapacityInitialized;
extern const float smallGrowthFactor;
extern const float mediumGrowthFactor;
extern const float largeGrowthFactor;

struct S
{
    int* data;
    int count;
    int capacity;

    void reallocate(int oldCount);
    void resize(int newCount, bool allowShrink);
};

void S::resize(int newCount, bool allowShrink)
{
    int oldCount = count;
    count = newCount;

    int minimum;
    if (!(static_cast<unsigned char>(minimumCapacityInitialized) & 1))
    {
        minimumCapacityInitialized |= 1;
        minimum = 10;
        minimumCapacity = minimum;
    }
    else
    {
        minimum = minimumCapacity;
    }

    int initialCapacity = capacity;
    int currentCount = count;

    if (currentCount > initialCapacity)
    {
        if (initialCapacity == 0)
        {
            capacity = newCount;
            reallocate(oldCount);
            return;
        }

        if (currentCount < minimum)
        {
            capacity = minimum;
            reallocate(oldCount);
            return;
        }

        double factor = smallGrowthFactor;
        unsigned int bytes = capacity * sizeof(int);
        if (bytes > 400000)
            factor = largeGrowthFactor;
        else if (bytes > 64000)
            factor = mediumGrowthFactor;

        int previousCapacity = capacity;
        capacity = static_cast<int>(factor * previousCapacity)
                 - previousCapacity + currentCount;

        if (capacity < minimumCapacity)
            capacity = minimumCapacity;

        reallocate(oldCount);
        return;
    }

    if (currentCount <= initialCapacity / 3 &&
        allowShrink &&
        currentCount > minimum)
    {
        if (currentCount >= oldCount)
            currentCount = oldCount;

        reallocate(currentCount);
    }
}
