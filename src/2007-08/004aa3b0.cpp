// from server: 63% by colin
// roc 2007-08 004aa3b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004aa3b0
//
// 004aa3b0  8b442408             mov eax, dword ptr [esp + 8]
// 004aa3b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004aa3b8  50                   push eax
// 004aa3b9  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004aa3bc  83ec08               sub esp, 8
// 004aa3bf  8bd4                 mov edx, esp
// 004aa3c1  8902                 mov dword ptr [edx], eax
// 004aa3c3  8b4110               mov eax, dword ptr [ecx + 0x10]
// 004aa3c6  85c0                 test eax, eax
// 004aa3c8  89642410             mov dword ptr [esp + 0x10], esp
// 004aa3cc  894204               mov dword ptr [edx + 4], eax
// 004aa3cf  740c                 je 0x4aa3dd
// 004aa3d1  83c004               add eax, 4
// 004aa3d4  ba01000000           mov edx, 1
// 004aa3d9  f00fc110             lock xadd dword ptr [eax], edx
// 004aa3dd  8b4108               mov eax, dword ptr [ecx + 8]
// 004aa3e0  50                   push eax
// 004aa3e1  e8cad2ffff           call 0x4a76b0
// 004aa3e6  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S_func_004aa3b0 {
    char pad0[8];
    int m_8;
    int m_c;
    int m_10;
};

void __cdecl func_004a76b0(int, int*, int);

void __cdecl func_004aa3b0(S_func_004aa3b0* p, int arg1, int arg2)
{
    int local[2];
    local[0] = p->m_c;
    local[1] = p->m_10;
    if (local[1] != 0) {
        _InterlockedExchangeAdd((volatile long*)(local[1] + 4), 1);
    }
    func_004a76b0(p->m_8, local, arg2);
}
