// from server: 100% by colin
// roc 2007-08 005b6df0  unit: RBX::$00W4SurfaceType::?$SurfaceGetSet  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b6df0
//
// 005b6df0  8b442404             mov eax, dword ptr [esp + 4]
// 005b6df4  85c0                 test eax, eax
// 005b6df6  56                   push esi
// 005b6df7  8bf1                 mov esi, ecx
// 005b6df9  7413                 je 0x5b6e0e
// 005b6dfb  8d48fc               lea ecx, [eax - 4]
// 005b6dfe  e88dcafbff           call 0x573890
// 005b6e03  8bc8                 mov ecx, eax
// 005b6e05  8b4604               mov eax, dword ptr [esi + 4]
// 005b6e08  ffd0                 call eax
// 005b6e0a  5e                   pop esi
// 005b6e0b  c20400               ret 4
// 005b6e0e  33c9                 xor ecx, ecx
// 005b6e10  e87bcafbff           call 0x573890
// 005b6e15  8bc8                 mov ecx, eax
// 005b6e17  8b4604               mov eax, dword ptr [esi + 4]
// 005b6e1a  ffd0                 call eax
// 005b6e1c  5e                   pop esi
// 005b6e1d  c20400               ret 4

struct SurfaceGetSet {
    void* get;
    void* set;
    void invoke(void* instance);
};

extern "C" void* __fastcall sub_573890(void* p);

void SurfaceGetSet::invoke(void* instance)
{
    void* obj;
    if (instance != 0) {
        obj = sub_573890((char*)instance - 4);
    } else {
        obj = sub_573890(0);
    }
    void* fn = this->set;
    ((void (__fastcall*)(void*))fn)(obj);
}
