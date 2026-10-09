// from server: 89% by colin
// roc 2007-08 006a32c0  unit: CXTPHookManager::CHookSink  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a32c0
//
// 006a32c0  56                   push esi
// 006a32c1  57                   push edi
// 006a32c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a32c6  57                   push edi
// 006a32c7  8bf1                 mov esi, ecx
// 006a32c9  e8f2040000           call 0x6a37c0
// 006a32ce  83f8ff               cmp eax, -1
// 006a32d1  743b                 je 0x6a330e
// 006a32d3  6a01                 push 1
// 006a32d5  50                   push eax
// 006a32d6  8bce                 mov ecx, esi
// 006a32d8  e8d3f30200           call 0x6d26b0
// 006a32dd  837f0400             cmp dword ptr [edi + 4], 0
// 006a32e1  740a                 je 0x6a32ed
// 006a32e3  8b07                 mov eax, dword ptr [edi]
// 006a32e5  8b10                 mov edx, dword ptr [eax]
// 006a32e7  6a01                 push 1
// 006a32e9  8bcf                 mov ecx, edi
// 006a32eb  ffd2                 call edx
// 006a32ed  837e0800             cmp dword ptr [esi + 8], 0
// 006a32f1  751b                 jne 0x6a330e
// 006a32f3  8b4618               mov eax, dword ptr [esi + 0x18]
// 006a32f6  50                   push eax
// 006a32f7  e844fdffff           call 0x6a3040
// 006a32fc  8bc8                 mov ecx, eax
// 006a32fe  e8ddf9ffff           call 0x6a2ce0
// 006a3303  8b16                 mov edx, dword ptr [esi]
// 006a3305  8b4204               mov eax, dword ptr [edx + 4]
// 006a3308  6a01                 push 1
// 006a330a  8bce                 mov ecx, esi
// 006a330c  ffd0                 call eax
// 006a330e  5f                   pop edi
// 006a330f  5e                   pop esi
// 006a3310  c20400               ret 4

struct CXTPHookManager_CHookSink
{
    void Unhook(int);
    int FindHook(int);
    void RemoveHook(int, int);
};

struct HookData
{
    void* vtbl;
    int field4;
};

extern "C" int __cdecl sub_6A3040(int);
extern "C" void __cdecl sub_6A2CE0(int);

void CXTPHookManager_CHookSink::Unhook(int param)
{
    int idx = FindHook(param);
    if (idx != -1)
    {
        RemoveHook(idx, 1);
        HookData* hd = (HookData*)param;
        if (hd->field4 != 0)
        {
            void (__thiscall *fn)(void*, int) = *(void (__thiscall **)(void*, int))hd->vtbl;
            fn(hd, 1);
        }
        if (*(int*)((char*)this + 8) == 0)
        {
            int v = *(int*)((char*)this + 0x18);
            sub_6A2CE0(sub_6A3040(v));
            void (__thiscall *fn2)(void*, int) = *(void (__thiscall **)(void*, int))(*(int*)this + 4);
            fn2(this, 1);
        }
    }
}
