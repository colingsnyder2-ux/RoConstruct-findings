// from server: 69% by colin
// roc 2007-08 00563210  unit: RBX::CameraPanLeftCommand  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563210
//
// 00563210  56                   push esi
// 00563211  8bf1                 mov esi, ecx
// 00563213  8b460c               mov eax, dword ptr [esi + 0xc]
// 00563216  8d8828020000         lea ecx, [eax + 0x228]
// 0056321c  8b01                 mov eax, dword ptr [ecx]
// 0056321e  8b5004               mov edx, dword ptr [eax + 4]
// 00563221  6aff                 push -1
// 00563223  ffd2                 call edx
// 00563225  8bc8                 mov ecx, eax
// 00563227  e8846c0300           call 0x599eb0
// 0056322c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0056322f  6a0b                 push 0xb
// 00563231  50                   push eax
// 00563232  e8d9e8ffff           call 0x561b10
// 00563237  83c404               add esp, 4
// 0056323a  8bc8                 mov ecx, eax
// 0056323c  e8cf950200           call 0x58c810
// 00563241  8b742408             mov esi, dword ptr [esp + 8]
// 00563245  6aff                 push -1
// 00563247  8bce                 mov ecx, esi
// 00563249  e862d6eaff           call 0x4108b0
// 0056324e  8b16                 mov edx, dword ptr [esi]
// 00563250  8b4204               mov eax, dword ptr [edx + 4]
// 00563253  6a01                 push 1
// 00563255  8bce                 mov ecx, esi
// 00563257  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 0056325e  ffd0                 call eax
// 00563260  5e                   pop esi
// 00563261  c20400               ret 4

struct CameraPanLeftCommand {
    char pad[0xc];
    void* workspace;
    void doIt(void* dataState);
};

extern "C" void __stdcall sub_599EB0(void*);
extern "C" void* __stdcall sub_561B10(void*, int);
extern "C" void __stdcall sub_58C810(void*);
extern "C" void __stdcall sub_4108B0(void*, int);

void CameraPanLeftCommand::doIt(void* dataState)
{
    void* ws = this->workspace;
    void* p = *(void**)((char*)ws + 0x228);
    void* vt = *(void**)p;
    void* (*fn)(void*, int) = *(void* (**)(void*, int))((char*)vt + 4);
    void* r = fn(p, -1);
    sub_599EB0(r);

    void* ws2 = this->workspace;
    void* r2 = sub_561B10(ws2, 0xb);
    sub_58C810(r2);

    void* ds = dataState;
    sub_4108B0(ds, -1);
    void** vt2 = *(void***)ds;
    void (*fn2)(void*, int) = *(void (**)(void*, int))((char*)vt2 + 4);
    *(int*)((char*)ds + 4) = -1;
    fn2(ds, 1);
}
