// from server: 43% by colin
// roc 2007-08 00416830  unit: VCLuaFunction::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416830
//
// 00416830  89642424             mov dword ptr [esp + 0x24], esp
// 00416834  50                   push eax
// 00416835  ff159ce67700         call dword ptr [0x77e69c]
// 0041683b  8b4610               mov eax, dword ptr [esi + 0x10]
// 0041683e  8b5608               mov edx, dword ptr [esi + 8]
// 00416841  50                   push eax
// 00416842  83ec08               sub esp, 8
// 00416845  8bcc                 mov ecx, esp
// 00416847  8911                 mov dword ptr [ecx], edx
// 00416849  8b460c               mov eax, dword ptr [esi + 0xc]
// 0041684c  85c0                 test eax, eax
// 0041684e  89642430             mov dword ptr [esp + 0x30], esp
// 00416852  894104               mov dword ptr [ecx + 4], eax
// 00416855  740c                 je 0x416863
// 00416857  83c004               add eax, 4
// 0041685a  b901000000           mov ecx, 1
// 0041685f  f00fc108             lock xadd dword ptr [eax], ecx
// 00416863  56                   push esi
// 00416864  8bcf                 mov ecx, edi
// 00416866  e8f5f2ffff           call 0x415b60
// 0041686b  5f                   pop edi
// 0041686c  5e                   pop esi
// 0041686d  59                   pop ecx
// 0041686e  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __stdcall func_77e69c();

struct Inner {
    int a;
    int b;
};

struct Outer {
    int pad0;
    int pad4;
    Inner inner;
    int pad14;
};

struct Target {
    int pad0;
    int pad4;
    Inner inner;
    int pad14;
    int method(int);
};

int Target::method(int arg)
{
    void* sp_save = (void*)&arg;
    (void)sp_save;
    func_77e69c();

    Inner local;
    local.a = this->inner.a;
    local.b = this->inner.b;
    if (local.b != 0) {
        _InterlockedExchangeAdd((volatile long*)(local.b + 4), 1);
    }

    return ((int (__thiscall*)(void*, Target*))0x415b60)((void*)arg, this);
}
