// from server: 100% by colin
// roc 2007-08 00600710  unit: RBX::VerbWidget  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00600710
//
// 00600710  56                   push esi
// 00600711  8bf1                 mov esi, ecx
// 00600713  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 0060071a  742a                 je 0x600746
// 0060071c  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00600722  8b01                 mov eax, dword ptr [ecx]
// 00600724  8b5008               mov edx, dword ptr [eax + 8]
// 00600727  ffd2                 call edx
// 00600729  84c0                 test al, al
// 0060072b  7419                 je 0x600746
// 0060072d  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00600733  8b542408             mov edx, dword ptr [esp + 8]
// 00600737  8b01                 mov eax, dword ptr [ecx]
// 00600739  8b5210               mov edx, dword ptr [edx + 0x10]
// 0060073c  5e                   pop esi
// 0060073d  89542404             mov dword ptr [esp + 4], edx
// 00600741  8b4010               mov eax, dword ptr [eax + 0x10]
// 00600744  ffe0                 jmp eax
// 00600746  5e                   pop esi
// 00600747  c20400               ret 4

struct InputObject;

struct Widget {
    char pad[0x100];
    void* verb;
    void onClick(const InputObject* event);
};

void Widget::onClick(const InputObject* event)
{
    if (verb != 0) {
        if (((bool (__thiscall*)(void*))((*(void***)verb)[2]))(verb)) {
            void* v = verb;
            void* e = *(void**)((char*)event + 0x10);
            ((void (__thiscall*)(void*, void*))((*(void***)v)[4]))(v, e);
        }
    }
}
