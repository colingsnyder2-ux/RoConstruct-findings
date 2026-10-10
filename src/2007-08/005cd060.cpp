// from server: 45% by colin
struct Primitive;

struct Contact {
    Primitive* primitive[2];
    bool computeIsColliding(float overlapIgnored);
};

struct BallBallContact : Contact {
    void* ballBallConnector;
    bool computeIsColliding(float overlapIgnored);
};

extern "C" bool __cdecl isCollidingHelper(Primitive* a, Primitive* b);

struct Vector3 {
    float x, y, z;
};

struct Ball {
    char pad[0x60];
    void* getWorld();
    char pad2[0x44];
    float radius;
};

extern "C" void __cdecl someFunc1(void*);
extern "C" void __cdecl someFunc2(void*);
extern "C" void __cdecl someFunc3(void*, void*, void*);
extern "C" void __cdecl someFunc4(void*, void*);
extern "C" float __cdecl someFunc5(void*);

bool BallBallContact::computeIsColliding(float overlapIgnored) {
    if (!isCollidingHelper(primitive[0], primitive[1])) {
        return false;
    }
    
    Ball* ball0 = (Ball*)((char*)primitive[0] + 0x64);
    Ball* ball1 = (Ball*)((char*)primitive[1] + 0x64);
    
    someFunc1(ball0);
    someFunc2(ball1);
    
    Vector3 diff;
    diff.x = ball0->radius - ball1->radius;
    diff.y = *(float*)((char*)ball0 + 0xac) - *(float*)((char*)ball1 + 0xac);
    diff.z = *(float*)((char*)ball0 + 0xb0) - *(float*)((char*)ball1 + 0xb0);
    
    Vector3 pos;
    someFunc3((char*)ball1 + 0x84, &pos, &diff);
    someFunc4(&pos, &diff);
    
    Vector3 worldPos;
    worldPos.x = diff.x;
    worldPos.y = diff.y;
    worldPos.z = diff.z;
    
    someFunc5(&worldPos);
    
    float dist = 0.0f;
    dist = worldPos.x * worldPos.y + worldPos.x * worldPos.y + worldPos.z * worldPos.z;
    
    float result = someFunc5((char*)primitive[1] + 0x60);
    result = result - dist;
    
    if (result > overlapIgnored) {
        return true;
    }
    return false;
}
