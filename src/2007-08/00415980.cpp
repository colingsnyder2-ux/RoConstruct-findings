// from server: 43% by colin
// roc 2007-08 00415980  unit: VCContent::?$CComContainedObject  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00415980
//
// 00415980  6aff                 push -1
// 00415982  68917b7400           push 0x747b91
// 00415987  64a100000000         mov eax, dword ptr fs:[0]
// 0041598d  50                   push eax
// 0041598e  51                   push ecx
// 0041598f  a188518b00           mov eax, dword ptr [0x8b5188]
// 00415994  33c4                 xor eax, esp
// 00415996  50                   push eax
// 00415997  8d442408             lea eax, [esp + 8]
// 0041599b  64a300000000         mov dword ptr fs:[0], eax
// 004159a1  8b442418             mov eax, dword ptr [esp + 0x18]
// 004159a5  89442418             mov dword ptr [esp + 0x18], eax
// 004159a9  89442404             mov dword ptr [esp + 4], eax
// 004159ad  85c0                 test eax, eax
// 004159af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004159b7  741a                 je 0x4159d3
// 004159b9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004159bd  8b11                 mov edx, dword ptr [ecx]
// 004159bf  8910                 mov dword ptr [eax], edx
// 004159c1  8b5104               mov edx, dword ptr [ecx + 4]
// 004159c4  83c108               add ecx, 8
// 004159c7  51                   push ecx
// 004159c8  8d4808               lea ecx, [eax + 8]
// 004159cb  895004               mov dword ptr [eax + 4], edx
// 004159ce  e8fdedffff           call 0x4147d0
// 004159d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004159d7  64890d00000000       mov dword ptr fs:[0], ecx
// 004159de  59                   pop ecx
// 004159df  83c410               add esp, 0x10
// 004159e2  c3                   ret 

struct VCContent_CComContainedObject {
    void ConstructFrom(void*);
};

extern "C" void __cdecl sub_4147D0(void*, void*);

void VCContent_CComContainedObject::ConstructFrom(void* src)
{
    void* p = *(void**)((char*)this + 0x18);
    *(void**)((char*)this + 0x18) = p;
    *(void**)((char*)this + 4) = p;
    *(int*)((char*)this + 0x10) = 0;
    if (p != 0) {
        void* q = *(void**)((char*)this + 0x1c);
        *(int*)p = *(int*)q;
        *(int*)((char*)p + 4) = *(int*)((char*)q + 4);
        q = (char*)q + 8;
        sub_4147D0((char*)p + 8, q);
    }
}
