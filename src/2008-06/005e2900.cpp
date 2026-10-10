// from server: 81% by Cezant64gamejr
struct RBX {
    struct RotatePJoint {
        float getFloat() {
            float* ptr = *(float**)((char*)this + 0x150);
            return *ptr;
        }
    };
};

int main() {
    RBX::RotatePJoint rpj;
    float value = rpj.getFloat();
    return 0;
}
