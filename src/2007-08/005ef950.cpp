// from server: 100% by colin
// roc 2007-08 005ef950  unit: RBX::BodyMover  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ef950
//
// 005ef950  56                   push esi
// 005ef951  57                   push edi
// 005ef952  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ef956  57                   push edi
// 005ef957  8bf1                 mov esi, ecx
// 005ef959  e80220f5ff           call 0x541960
// 005ef95e  3937                 cmp dword ptr [edi], esi
// 005ef960  7520                 jne 0x5ef982
// 005ef962  8b4708               mov eax, dword ptr [edi + 8]
// 005ef965  6a00                 push 0
// 005ef967  68284a8800           push 0x884a28
// 005ef96c  684c1f8800           push 0x881f4c
// 005ef971  6a00                 push 0
// 005ef973  50                   push eax
// 005ef974  e8bd130400           call 0x630d36
// 005ef979  83c414               add esp, 0x14
// 005ef97c  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 005ef982  8bce                 mov ecx, esi
// 005ef984  e8d7feffff           call 0x5ef860
// 005ef989  5f                   pop edi
// 005ef98a  5e                   pop esi
// 005ef98b  c20400               ret 4

struct BodyMover {
    void sub_005ef950(void*);
    void sub_005ef860();
};

extern "C" void __stdcall sub_00541960(void*);
extern "C" void* __cdecl sub_00630d36(void*, void*, void*, void*, void*);

void BodyMover::sub_005ef950(void* arg)
{
    sub_00541960(arg);
    if (*(void**)arg == this) {
        void* p = *(void**)((char*)arg + 8);
        void* r = sub_00630d36(p, 0, (void*)0x881f4c, (void*)0x884a28, 0);
        *(void**)((char*)this + 0xf8) = r;
    }
    sub_005ef860();
}
