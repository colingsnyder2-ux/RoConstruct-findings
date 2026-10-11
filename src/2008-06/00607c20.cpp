// from server: 71% by tester
struct BlockBlockContact {
    bool computeIsColliding(float overlapIgnored);
    bool getBestPlaneEdge(float overlapIgnored, bool& planeContact);
    bool computeIsCollidingHelper(int a, int b);
};

bool BlockBlockContact::computeIsColliding(float overlapIgnored) {
    int a = *(int*)((char*)this + 0x10);
    int b = *(int*)((char*)this + 0xc);
    a += 0x80;
    b += 0x80;
    if (computeIsCollidingHelper(b, a)) {
        bool planeContact;
        if (getBestPlaneEdge(overlapIgnored, planeContact)) {
            return true;
        }
    }
    return false;
}
