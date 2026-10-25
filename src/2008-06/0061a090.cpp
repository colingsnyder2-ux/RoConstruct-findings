// from server: 100% by king_originala
// roc 2008-06 0061a090  unit: RBX::InletTool  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a090
//
// 0061a090  6854bf9700           push 0x97bf54
// 0061a095  6880a06100           push 0x61a080
// 0061a09a  e891d2f3ff           call 0x557330
// 0061a09f  83c408               add esp, 8
// 0061a0a2  683cbf9700           push 0x97bf3c
// 0061a0a7  ff15d4228000         call dword ptr [0x8022d4]
// 0061a0ad  683cbf9700           push 0x97bf3c
// 0061a0b2  ff15f4218000         call dword ptr [0x8021f4]
// 0061a0b8  c3                   ret 

extern char criticalSection;
extern char initializationFlag;

extern void __cdecl initialize();
extern void __cdecl initializeOnce(void (__cdecl *)(), void *);

extern "C" {
    extern void (__stdcall *EnterCriticalSection)(void *);
    extern void (__stdcall *LeaveCriticalSection)(void *);
}

void func_0061a090()
{
    initializeOnce(initialize, &initializationFlag);
    EnterCriticalSection(&criticalSection);
    LeaveCriticalSection(&criticalSection);
}
