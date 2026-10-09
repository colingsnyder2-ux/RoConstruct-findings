// from server: 64% by colin
// roc 2007-08 005b9270  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9270
//
// 005b9270  8b542404             mov edx, dword ptr [esp + 4]
// 005b9274  56                   push esi
// 005b9275  8bf1                 mov esi, ecx
// 005b9277  8b0e                 mov ecx, dword ptr [esi]
// 005b9279  8b4604               mov eax, dword ptr [esi + 4]
// 005b927c  8b89d8010000         mov ecx, dword ptr [ecx + 0x1d8]
// 005b9282  3b54817c             cmp edx, dword ptr [ecx + eax*4 + 0x7c]
// 005b9286  742c                 je 0x5b92b4
// 005b9288  52                   push edx
// 005b9289  50                   push eax
// 005b928a  e881b8ffff           call 0x5b4b10
// 005b928f  8b5604               mov edx, dword ptr [esi + 4]
// 005b9292  8b0e                 mov ecx, dword ptr [esi]
// 005b9294  52                   push edx
// 005b9295  e806acfbff           call 0x573ea0
// 005b929a  8b4604               mov eax, dword ptr [esi + 4]
// 005b929d  8b0e                 mov ecx, dword ptr [esi]
// 005b929f  50                   push eax
// 005b92a0  e8eba5fbff           call 0x573890
// 005b92a5  8bc8                 mov ecx, eax
// 005b92a7  e834d8ffff           call 0x5b6ae0
// 005b92ac  8b0e                 mov ecx, dword ptr [esi]
// 005b92ae  50                   push eax
// 005b92af  e85cb4e8ff           call 0x444710
// 005b92b4  5e                   pop esi
// 005b92b5  c20400               ret 4

struct EnumPropDescriptor {
    void* getset;
    int index;
    void setValue(int value);
};

extern "C" void __stdcall sub_5B4B10(int index, int value);
extern "C" void __stdcall sub_573EA0(int index);
extern "C" void* __stdcall sub_573890(int index);
extern "C" void __stdcall sub_5B6AE0(void* p);
extern "C" void __stdcall sub_444710(void* p);

void EnumPropDescriptor::setValue(int value)
{
    int* obj = *(int**)this;
    int idx = *(int*)((char*)this + 4);
    int* desc = *(int**)((char*)obj + 0x1d8);
    if (value != desc[idx + 0x1f]) {
        sub_5B4B10(idx, value);
        int i2 = *(int*)((char*)this + 4);
        int* o2 = *(int**)this;
        sub_573EA0(i2);
        int i3 = *(int*)((char*)this + 4);
        int* o3 = *(int**)this;
        void* p = sub_573890(i3);
        sub_5B6AE0(p);
        int* o4 = *(int**)this;
        sub_444710(o4);
    }
}
