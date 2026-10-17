// from server: 14% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCounted
{
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct String
{
    void* alloc;
    union
    {
        char buf[16];
        char* ptr;
    };
    unsigned int size;
    unsigned int capacity;
};

struct BitStream
{
    void* data;
};

struct CoordinateFrame
{
    float r0[3];
    float r1[3];
    float r2[3];
    float r3[3];
};

struct Velocity
{
    float v[3];
};

struct MechanismItem
{
    void* part;
    void* assembly;
    int motorCount;
};

struct PhysicsReceiver
{
    void* vptr;
    void* replicator;
};

struct DirectPhysicsReceiver : PhysicsReceiver
{
    void receivePacket(BitStream& bitstream, unsigned int timeStamp, void* stats);
};

extern void* __cdecl sub_49e890();
extern void* __cdecl sub_513e20();
extern void __cdecl sub_6a158c(void*, void*);
extern void* __cdecl sub_5a8440(void*, void*, int);
extern void* __cdecl sub_569620(void*);
extern void* __cdecl sub_5693a0(void*, const char*, int, void*);
extern void __cdecl sub_600660(void*);
extern void* __cdecl sub_5dd6d0(void*, void*);
extern float __cdecl sub_5dda30(void*);
extern void* __cdecl sub_5e7570(void*);
extern void* __cdecl sub_5e60e0(void*);
extern void* __cdecl sub_5e62d0(void*);
extern void* __cdecl sub_5e6400(void*, int);
extern void* __cdecl sub_5e5da0(void*);
extern void* __cdecl sub_5997f0(void*, void*);
extern void* __cdecl sub_5995f0(void*, void*);
extern void* __cdecl sub_4a8b60(void*, void*, void*, void*);
extern void* __cdecl sub_4c7530(void*, void*);
extern void* __cdecl sub_4c7ef0(void*);
extern void* __cdecl sub_4ca5c0(void*, void*, void*);
extern void* __cdecl sub_4a5f20(void*, void*, void*, void*, void*);
extern void* __cdecl sub_4a6380(void*, void*);
extern void* __cdecl sub_4025b0(void*, void*);
extern void* __cdecl sub_456e80(void*);
extern void* __cdecl sub_513220(void*, void*);

extern void* g_802468;
extern void* g_802458;
extern void* g_80245c;
extern void* g_802898;
extern float g_96f044;
extern float g_96f048;
extern float g_96f04c;
extern int g_96f050;

void DirectPhysicsReceiver::receivePacket(BitStream& bitstream, unsigned int timeStamp, void* stats)
{
    void* part = 0;
    void* assembly = 0;
    void* local = 0;

    for (;;)
    {
        void* bs = &bitstream;
        void* out = &local;
        void* tmp = &part;
        void* rep = *(void**)((char*)this + 4);
        char ok = (char)(int)sub_4a8b60(rep, (void*)timeStamp, out, tmp);
        if (!ok)
        {
            void* s = sub_49e890();
            if (*(char*)((char*)s + 0x130) == 0)
                goto done;
            void* str = sub_5a8440(0, 0, 4);
            sub_569620(str);
            void* p = *(void**)str;
            sub_5693a0(p, "Physics-in of unidentified %s", 1, 0);
            goto done;
        }

        if (part == 0)
            goto done;

        void* item = sub_4c7530((char*)part + 0xe4, &local);
        void* ref = *(void**)item;
        item = (char*)item + 4;
        part = ref;
        sub_4025b0(&local, item);

        if (local)
        {
            RefCounted* rc = (RefCounted*)local;
            if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1)
            {
                void* vt = *(void**)rc;
                ((void(__thiscall*)(void*))*(void**)((char*)vt + 4))(rc);
                if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1)
                {
                    void* vt2 = *(void**)rc;
                    ((void(__thiscall*)(void*))*(void**)((char*)vt2 + 8))(rc);
                }
            }
        }

        if (part == 0)
            goto done;

        {
            void* a = part;
            void* b = assembly;
            if (b)
                _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
            char r = (char)(int)sub_5995f0(a, b);
            if (r)
            {
                void* m = sub_5e7570((char*)part + 0x228);
                if (m == 0)
                {
                    void* s = sub_49e890();
                    if (*(char*)((char*)s + 0x130) == 0)
                        goto done;
                    void* str = sub_5a8440(0, 0, 4);
                    sub_569620(str);
                    void* p = *(void**)str;
                    sub_5693a0(p, "Physics-in of primitive with no assembly %s", 1, 0);
                    goto done;
                }
                void* asmObj = *(void**)((char*)part + 0x284);
                char anchored = (char)(int)sub_5e60e0(asmObj);
                if (!anchored)
                {
                    void* s = sub_49e890();
                    if (*(char*)((char*)s + 0x130) == 0)
                        goto done;
                    void* str = sub_5a8440(0, 0, 4);
                    sub_569620(str);
                    void* p = *(void**)str;
                    sub_5693a0(p, "Physics-in of anchored primitive %s", 1, 0);
                    goto done;
                }
                void* r2 = sub_4c7ef0((char*)part + 0xec);
                if (*(unsigned int*)r2 > timeStamp)
                {
                    void* s = sub_49e890();
                    if (*(char*)((char*)s + 0x130) != 0)
                    {
                        void* str = sub_569620(0);
                        void* p = *(void**)str;
                        sub_5693a0(p, "Physics-in old packet", 1, 0);
                        sub_600660(str);
                    }
                    goto done;
                }
                *(unsigned int*)r2 = timeStamp;
            }
        }

        {
            void* s = sub_49e890();
            if (*(char*)((char*)s + 0x130) == 0)
                goto done;
            void* str = sub_5a8440(0, 0, 4);
            sub_569620(str);
            void* p = *(void**)str;
            sub_5693a0(p, "Physics-in of part not in workspace %s", 1, 0);
            goto done;
        }
    }

done:
    return;
}
