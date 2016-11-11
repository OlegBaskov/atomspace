/*
 * opencog/atomspace/TLB.cc
 *
 * Copyright (C) 2011 OpenCog Foundation
 * All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License v3 as
 * published by the Free Software Foundation and including the exceptions
 * at http://opencog.org/wiki/Licenses
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program; if not, write to:
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "TLB.h"

using namespace opencog;

std::atomic<UUID> TLB::_brk_uuid(1);

std::mutex TLB::_mtx;
std::unordered_map<UUID, Handle> TLB::_uuid_map;
std::unordered_map<Handle, UUID> TLB::_handle_map;
