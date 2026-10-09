// from server: 80% by colin
// roc 2007-08 005634b0  unit: RBX::CameraModelViewCommand  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005634b0
//
// 005634b0  56                   push esi
// 005634b1  8bf1                 mov esi, ecx
// 005634b3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005634b6  8d816c020000         lea eax, [ecx + 0x26c]
// 005634bc  50                   push eax
// 005634bd  e8bea30100           call 0x57d880
// 005634c2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005634c5  6a0b                 push 0xb
// 005634c7  51                   push ecx
// 005634c8  e843e6ffff           call 0x561b10
// 005634cd  83c404               add esp, 4
// 005634d0  8bc8                 mov ecx, eax
// 005634d2  e839930200           call 0x58c810
// 005634d7  8b742408             mov esi, dword ptr [esp + 8]
// 005634db  6aff                 push -1
// 005634dd  8bce                 mov ecx, esi
// 005634df  e8ccd3eaff           call 0x4108b0
// 005634e4  8b16                 mov edx, dword ptr [esi]
// 005634e6  8b4204               mov eax, dword ptr [edx + 4]
// 005634e9  6a01                 push 1
// 005634eb  8bce                 mov ecx, esi
// 005634ed  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 005634f4  ffd0                 call eax
// 005634f6  5e                   pop esi
// 005634f7  c20400               ret 4

struct CameraModelViewCommand {
    char pad[0xc];
    void* field_c;
    void execute(int);
};

extern "C" void __stdcall sub_57D880(void*);
extern "C" void* __cdecl sub_561B10(void*, int);
extern "C" void __stdcall sub_58C810(void*);
extern "C" void __stdcall sub_4108B0(void*, int);

void CameraModelViewCommand::execute(int arg)
{
    void* p = this->field_c;
    sub_57D880((char*)p + 0x26c);
    void* q = sub_561B10(this->field_c, 0xb);
    sub_58C810(q);
    void* r = *(void**)((char*)&arg + 4);
    sub_4108B0(r, -1);
    void** vt = *(void***)r;
    void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
    *(int*)((char*)r + 4) = -1;
    fn(r, 1);
}
