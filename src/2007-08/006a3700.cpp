// from server: 70% by colin
struct CHookSink {
    char pad0[8];
    int field8;
    char padC[0x10];
    int field1C;
    int FindHook(int);

    int AddHook(int a, int b);
};

struct HookMgr {
    CHookSink* Find(int);
    CHookSink** Insert(int);
};

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" int __cdecl sub_62FF02();
extern "C" CHookSink* __cdecl sub_6A36C0(int);
extern "C" int __cdecl sub_6D2910(CHookSink*, int, int);

int CHookSink::AddHook(int a, int b) {
    CHookSink* sink = ((HookMgr*)this)->Find(a);
    if (sink != 0) {
        if (sink->FindHook(b) == -1) {
            sub_6D2910(sink, sink->field8, b);
        }
    } else {
        void* mem = sub_62FEF6(0x20);
        if (mem != 0) {
            sink = sub_6A36C0(a);
        } else {
            sink = 0;
        }
        sub_6D2910(sink, sink->field8, b);
        *((HookMgr*)this)->Insert(a) = sink;
    }
    sink->field1C = sub_62FF02();
    return 0;
}
