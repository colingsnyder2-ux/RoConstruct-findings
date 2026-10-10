// from server: 57% by colin
struct World {
    float x;
    float y;
    float z;
    float w;
    float computeSomething(const float* box);
};

float World::computeSomething(const float* box) {
    float dx = box[4] + box[0] + box[8];
    if (dx > 0.0f) {
        float len = dx + 1.0f;
        float inv = 1.0f / (len * 0.5f);
        float r = len * 0.5f;
        this->x = (box[7] - box[5]) * inv;
        this->y = (box[2] - box[6]) * inv;
        this->z = (box[3] - box[1]) * inv;
        this->w = r;
    } else if (box[4] > box[0] && box[8] > box[0]) {
        float len = box[0] + 1.0f - box[4] - box[8];
        float r = -len * 0.5f;
        float inv = 1.0f / (len * 0.5f);
        this->x = r;
        this->y = (box[3] + box[1]) * inv;
        this->z = (box[6] + box[2]) * inv;
        this->w = (box[7] - box[5]) * inv;
    } else if (box[8] > box[4]) {
        float len = box[4] + 1.0f - box[0] - box[8];
        float r = -len * 0.5f;
        float inv = 1.0f / (len * 0.5f);
        this->x = (box[3] + box[1]) * inv;
        this->y = r;
        this->z = (box[7] + box[5]) * inv;
        this->w = (box[2] - box[6]) * inv;
    } else {
        float len = box[8] + 1.0f - box[0] - box[4];
        float r = -len * 0.5f;
        float inv = 1.0f / (len * 0.5f);
        this->x = (box[6] + box[2]) * inv;
        this->y = (box[7] + box[5]) * inv;
        this->z = r;
        this->w = (box[3] - box[1]) * inv;
    }
    return 0.0f;
}
