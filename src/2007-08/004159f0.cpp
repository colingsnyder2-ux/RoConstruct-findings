// from server: 33% by colin
// roc 2007-08 004159f0  unit: VCContent::?$CComContainedObject  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004159f0
//
// 004159f0  6aff                 push -1
// 004159f2  68917b7400           push 0x747b91
// 004159f7  64a100000000         mov eax, dword ptr fs:[0]
// 004159fd  50                   push eax
// 004159fe  51                   push ecx
// 004159ff  a188518b00           mov eax, dword ptr [0x8b5188]
// 00415a04  33c4                 xor eax, esp
// 00415a06  50                   push eax
// 00415a07  8d442408             lea eax, [esp + 8]
// 00415a0b  64a300000000         mov dword ptr fs:[0], eax
// 00415a11  8b442418             mov eax, dword ptr [esp + 0x18]
// 00415a15  89442418             mov dword ptr [esp + 0x18], eax
// 00415a19  89442404             mov dword ptr [esp + 4], eax
// 00415a1d  85c0                 test eax, eax
// 00415a1f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00415a27  741a                 je 0x415a43
// 00415a29  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00415a2d  8b11                 mov edx, dword ptr [ecx]
// 00415a2f  8910                 mov dword ptr [eax], edx
// 00415a31  8b5104               mov edx, dword ptr [ecx + 4]
// 00415a34  83c108               add ecx, 8
// 00415a37  51                   push ecx
// 00415a38  8d4808               lea ecx, [eax + 8]
// 00415a3b  895004               mov dword ptr [eax + 4], edx
// 00415a3e  e8fdedffff           call 0x414840
// 00415a43  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00415a47  64890d00000000       mov dword ptr fs:[0], ecx
// 00415a4e  59                   pop ecx
// 00415a4f  83c410               add esp, 0x10
// 00415a52  c3                   ret 

struct VCContent_CComContainedObject
{
    void Construct(void* p, void* src);
};

extern "C" void __stdcall sub_414840(void* p);

void VCContent_CComContainedObject::Construct(void* p, void* src)
{
    if (p != 0)
    {
        *(int*)p = *(int*)src;
        *(int*)((char*)p + 4) = *(int*)((char*)src + 4);
        sub_414840((char*)p + 8);
    }
}
