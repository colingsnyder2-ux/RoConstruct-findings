// from server: 100% by atomic.potato
// roc 2008-06 00443020  unit: RBX::Reflection::Metadata::Members  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443020
//
// 00443020  8b442404             mov eax, dword ptr [esp + 4]
// 00443024  6a00                 push 0
// 00443026  6878ac9200           push 0x92ac78
// 0044302b  687c909200           push 0x92907c
// 00443030  6a00                 push 0
// 00443032  50                   push eax
// 00443033  e88ee72500           call 0x6a17c6
// 00443038  83c414               add esp, 0x14
// 0044303b  f7d8                 neg eax
// 0044303d  1bc0                 sbb eax, eax
// 0044303f  f7d8                 neg eax
// 00443041  c20400               ret 4

extern "C" int __cdecl sub_6a17c6(void*, void*, void*, void*, void*);

int __stdcall f(void* value)
{
    int result = sub_6a17c6(value, 0, (void*)0x92907c, (void*)0x92ac78, 0);
    return result != 0;
}
