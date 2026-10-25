// from server: 100% by tester
// roc 2008-06 00437010  unit: CStandardOutputView  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437010
//
// 00437010  56                   push esi
// 00437011  8bf1                 mov esi, ecx
// 00437013  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00437016  40                   inc eax
// 00437017  57                   push edi
// 00437018  394614               cmp dword ptr [esi + 0x14], eax
// 0043701b  7707                 ja 0x437024
// 0043701d  6a01                 push 1
// 0043701f  e88cfeffff           call 0x436eb0
// 00437024  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00437027  037e1c               add edi, dword ptr [esi + 0x1c]
// 0043702a  8b4614               mov eax, dword ptr [esi + 0x14]
// 0043702d  3bc7                 cmp eax, edi
// 0043702f  7702                 ja 0x437033
// 00437031  2bf8                 sub edi, eax
// 00437033  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00437036  833cb900             cmp dword ptr [ecx + edi*4], 0
// 0043703a  7510                 jne 0x43704c
// 0043703c  6a28                 push 0x28
// 0043703e  e8dd982600           call 0x6a0920
// 00437043  8b5610               mov edx, dword ptr [esi + 0x10]
// 00437046  83c404               add esp, 4
// 00437049  8904ba               mov dword ptr [edx + edi*4], eax
// 0043704c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00437050  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00437053  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 00437056  50                   push eax
// 00437057  52                   push edx
// 00437058  e8e3fdffff           call 0x436e40
// 0043705d  ff461c               inc dword ptr [esi + 0x1c]
// 00437060  83c408               add esp, 8
// 00437063  5f                   pop edi
// 00437064  5e                   pop esi
// 00437065  c20400               ret 4

extern "C" void* __cdecl allocate(unsigned int);
extern "C" void __cdecl construct(void*, const void*);

struct S {
    unsigned int reserved[4];
    void** blocks;
    unsigned int capacity;
    unsigned int start;
    unsigned int count;

    void grow(unsigned int);
    void append(const void*);
};

void S::append(const void* value)
{
    if (capacity <= count + 1)
        grow(1);

    unsigned int index = start + count;
    if (capacity <= index)
        index -= capacity;

    if (blocks[index] == 0)
        blocks[index] = allocate(40);

    construct(blocks[index], value);
    ++count;
}
