#!/usr/bin/env python3

# Author: Nic Olsen

import random

filename = "sample.csv"
n_instances = 100
lo = -1000
hi = 1000

features = ["lengh", "width", "depth", "red", "green", "blue", "alpha", "compliance"]
n_features = len(features)

data = []
for i in range(n_instances):
    data.append([random.uniform(lo, hi) for f in range(n_features)])

with open(filename, 'w') as file:
    file.write(",".join(features) + "\n")
    for i in range(n_instances):
        file.write(",".join([str(data[i][f]) for f in range(n_features)]) + "\n")
