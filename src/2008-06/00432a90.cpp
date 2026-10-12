// from server: 100% by king_originala
// roc 2008-06 00432a90  unit: RBX::CMarshalWindow  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432a90
//
// 00432a90  837c241800           cmp dword ptr [esp + 0x18], 0
// 00432a95  756e                 jne 0x432b05
// 00432a97  8b442408             mov eax, dword ptr [esp + 8]
// 00432a9b  83f802               cmp eax, 2
// 00432a9e  7533                 jne 0x432ad3
// 00432aa0  8b542410             mov edx, dword ptr [esp + 0x10]
// 00432aa4  8d442418             lea eax, [esp + 0x18]
// 00432aa8  50                   push eax
// 00432aa9  8b442410             mov eax, dword ptr [esp + 0x10]
// 00432aad  52                   push edx
// 00432aae  50                   push eax
// 00432aaf  6a02                 push 2
// 00432ab1  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00432ab9  e8b2feffff           call 0x432970
// 00432abe  837c241800           cmp dword ptr [esp + 0x18], 0
// 00432ac3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00432ac7  8901                 mov dword ptr [ecx], eax
// 00432ac9  743a                 je 0x432b05
// 00432acb  b801000000           mov eax, 1
// 00432ad0  c21800               ret 0x18
// 00432ad3  3d65040000           cmp eax, 0x465
// 00432ad8  752b                 jne 0x432b05
// 00432ada  56                   push esi
// 00432adb  8b742414             mov esi, dword ptr [esp + 0x14]
// 00432adf  8b16                 mov edx, dword ptr [esi]
// 00432ae1  8b02                 mov eax, dword ptr [edx]
// 00432ae3  8bce                 mov ecx, esi
// 00432ae5  ffd0                 call eax
// 00432ae7  8b16                 mov edx, dword ptr [esi]
// 00432ae9  8b4204               mov eax, dword ptr [edx + 4]
// 00432aec  6a01                 push 1
// 00432aee  8bce                 mov ecx, esi
// 00432af0  ffd0                 call eax
// 00432af2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00432af6  c70100000000         mov dword ptr [ecx], 0
// 00432afc  b801000000           mov eax, 1
// 00432b01  5e                   pop esi
// 00432b02  c21800               ret 0x18
// 00432b05  33c0                 xor eax, eax
// 00432b07  c21800               ret 0x18

struct Task {
    virtual void run() = 0;
    virtual void release(int) = 0;
};

struct S {
    long handle(unsigned int, unsigned int, Task*, int&);
    int process(void*, unsigned int, unsigned int, Task*, long*, int);
};

int S::process(void*, unsigned int message, unsigned int wParam,
               Task* task, long* result, int map)
{
    if (map == 0) {
        if (message == 2) {
            map = 1;
            *result = handle(2, wParam, task, map);
            if (map)
                return 1;
        } else if (message == 0x465) {
            task->run();
            task->release(1);
            *result = 0;
            return 1;
        }
    }
    return 0;
}
