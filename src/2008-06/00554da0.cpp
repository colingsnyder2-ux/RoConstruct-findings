// from server: 100% by king_originala
// roc 2008-06 00554da0  unit: RBX::RunService  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554da0
//
// 00554da0  56                   push esi
// 00554da1  57                   push edi
// 00554da2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00554da6  8bf1                 mov esi, ecx
// 00554da8  83ff01               cmp edi, 1
// 00554dab  7511                 jne 0x554dbe
// 00554dad  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 00554db3  85c0                 test eax, eax
// 00554db5  7423                 je 0x554dda
// 00554db7  83f802               cmp eax, 2
// 00554dba  7549                 jne 0x554e05
// 00554dbc  eb1c                 jmp 0x554dda
// 00554dbe  83ff02               cmp edi, 2
// 00554dc1  750b                 jne 0x554dce
// 00554dc3  83beb401000001       cmp dword ptr [esi + 0x1b4], 1
// 00554dca  7539                 jne 0x554e05
// 00554dcc  eb0c                 jmp 0x554dda
// 00554dce  85ff                 test edi, edi
// 00554dd0  7508                 jne 0x554dda
// 00554dd2  d9ee                 fldz 
// 00554dd4  dd9eb8010000         fstp qword ptr [esi + 0x1b8]
// 00554dda  53                   push ebx
// 00554ddb  8b9eb4010000         mov ebx, dword ptr [esi + 0x1b4]
// 00554de1  3bdf                 cmp ebx, edi
// 00554de3  741f                 je 0x554e04
// 00554de5  57                   push edi
// 00554de6  8d8e90010000         lea ecx, [esi + 0x190]
// 00554dec  89beb4010000         mov dword ptr [esi + 0x1b4], edi
// 00554df2  e8e9fcffff           call 0x554ae0
// 00554df7  57                   push edi
// 00554df8  53                   push ebx
// 00554df9  8d8e70010000         lea ecx, [esi + 0x170]
// 00554dff  e85cfcffff           call 0x554a60
// 00554e04  5b                   pop ebx
// 00554e05  5f                   pop edi
// 00554e06  5e                   pop esi
// 00554e07  c20400               ret 4

struct StateSignal {
    char storage[0x20];
    void fire(int oldState, int newState);
};

struct ValueSignal {
    char storage[0x24];
    void fire(int newState);
};

struct RunService {
    char padding[0x170];
    StateSignal stateSignal;
    ValueSignal valueSignal;
    int state;
    double elapsed;

    void setState(int newState);
};

void RunService::setState(int newState)
{
    if (newState == 1) {
        if (state != 0 && state != 2)
            return;
    } else if (newState == 2) {
        if (state != 1)
            return;
    } else if (newState == 0) {
        elapsed = 0.0;
    }

    int oldState = state;
    if (oldState != newState) {
        state = newState;
        valueSignal.fire(newState);
        stateSignal.fire(oldState, newState);
    }
}
