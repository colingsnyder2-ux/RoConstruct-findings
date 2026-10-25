// from server: 100% by king_originala
// roc 2008-06 00585050  unit: RBX::ModelInstance  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585050
//
// 00585050  8b442404             mov eax, dword ptr [esp + 4]
// 00585054  56                   push esi
// 00585055  6a00                 push 0
// 00585057  6808699300           push 0x936908
// 0058505c  687c909200           push 0x92907c
// 00585061  6a00                 push 0
// 00585063  50                   push eax
// 00585064  8bf1                 mov esi, ecx
// 00585066  e85bc71100           call 0x6a17c6
// 0058506b  83c414               add esp, 0x14
// 0058506e  89442408             mov dword ptr [esp + 8], eax
// 00585072  85c0                 test eax, eax
// 00585074  7410                 je 0x585086
// 00585076  8d4c2408             lea ecx, [esp + 8]
// 0058507a  51                   push ecx
// 0058507b  8d8eec010000         lea ecx, [esi + 0x1ec]
// 00585081  e81ac3e9ff           call 0x4213a0
// 00585086  5e                   pop esi
// 00585087  c20400               ret 4

extern char instanceType[];
extern char modifierType[];

extern "C" void* __cdecl runtimeCast(
    void*, long, const void*, const void*, int);

struct Listener {
    void notify(void**);
};

struct S {
    char padding[0x1ec];
    Listener listener;
    void f(void*);
};

void S::f(void* object)
{
    object = runtimeCast(object, 0, instanceType, modifierType, 0);
    if (object)
        listener.notify(&object);
}
