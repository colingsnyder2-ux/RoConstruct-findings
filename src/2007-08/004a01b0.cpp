// from server: 81% by colin
// roc 2007-08 004a01b0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a01b0
//
// 004a01b0  8b442404             mov eax, dword ptr [esp + 4]
// 004a01b4  56                   push esi
// 004a01b5  8b30                 mov esi, dword ptr [eax]
// 004a01b7  8b4004               mov eax, dword ptr [eax + 4]
// 004a01ba  8b16                 mov edx, dword ptr [esi]
// 004a01bc  50                   push eax
// 004a01bd  8b4224               mov eax, dword ptr [edx + 0x24]
// 004a01c0  8bce                 mov ecx, esi
// 004a01c2  ffd0                 call eax
// 004a01c4  89442408             mov dword ptr [esp + 8], eax
// 004a01c8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004a01cb  8b5124               mov edx, dword ptr [ecx + 0x24]
// 004a01ce  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a01d2  6a01                 push 1
// 004a01d4  83c201               add edx, 1
// 004a01d7  52                   push edx
// 004a01d8  8d442410             lea eax, [esp + 0x10]
// 004a01dc  50                   push eax
// 004a01dd  e8aefbffff           call 0x49fd90
// 004a01e2  5e                   pop esi
// 004a01e3  c3                   ret 

struct BoundFuncDesc {
};

struct FuncDescBase {
    virtual int getSomething(void*);
};

extern "C" int __cdecl func_0049fd90(int*, int, int);

void __cdecl invoke(void* args)
{
    int* a = (int*)args;
    FuncDescBase* obj = (FuncDescBase*)a[0];
    int val = a[1];
    int r = ((int (__thiscall*)(FuncDescBase*, int))((*(int**)obj)[0x24/4]))(obj, val);
    int* holder = (int*)((char*)obj + 0x18);
    int* inner = (int*)holder[0];
    int n = inner[0x24/4] + 1;
    func_0049fd90(&r, n, 1);
}
